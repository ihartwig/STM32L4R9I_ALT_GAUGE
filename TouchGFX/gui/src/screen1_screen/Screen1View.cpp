#include <gui/screen1_screen/Screen1View.hpp>
#include <BitmapDatabase.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextureMapper.hpp>
#include <touchgfx/widgets/AnimationTextureMapper.hpp>
#include <touchgfx/EasingEquations.hpp>

Screen1View::Screen1View() :
    tickCounter(0),
    hours(1),
    minutes(10),
    seconds(0),
    humidityEntropi(0.0f),
    pressureEntropi(0.0f),
	altitude(0)
{
}


void Screen1View::setupScreen()
{
    HAL::getInstance()->setFrameRateCompensation(true);
    // prevent user from moving drums
    altDrum10k.allowVerticalDrag(false);
    altDrum1k.allowVerticalDrag(false);
    altDrum100.allowVerticalDrag(false);
    // move positions to invoke callback to init display
    altDrum10k.animateToItem(0, 0);
    altDrum1k.animateToItem(0, 0);
    altDrum100.animateToItem(0, 0);
    altKollsmanInHg.animateToItem(20, 0);
    altKollsmanMbar.animateToItem(20, 0);
}

void Screen1View::tearDownScreen()
{
    HAL::getInstance()->setFrameRateCompensation(false);
}

void Screen1View::handleTickEvent()
{
    ++tickCounter;

    if (tickCounter % TICKS_PER_SEC == 0)
    {
        if (++seconds >= 60)
        {
            seconds = 0;
            if (++minutes >= 60)
            {
                minutes = 0;
                if (++hours >= 24)
                {
                    hours = 0;
                }
            }
        }

        // Update humidity
        humidityEntropi = ((seconds * seconds + seconds * 5 + hours) % 180) / 360.0f * 2 * PI - PI / 2;
        humidity.setupAnimation(AnimationTextureMapper::Z_ROTATION, humidityEntropi, 250, 0, EasingEquations::cubicEaseInOut);
        humidity.startAnimation();

        // Update altimeter dial
        // updateAltDisplay(tickCounter, altitude);
        // altitude = tickCounter;
    }
}

// Update the dial and drum displays for this altitude and start animations
void Screen1View::updateAltDisplay(int altForUpdate, int altBefore)
{
    float alt_dial_pi;
    int16_t alt_drum_100_idx;
    int16_t alt_drum_1k_idx;
    int16_t alt_drum_10k_idx;
    int16_t alt_drum_dir_idx;
    // dial
    alt_dial_pi = altForUpdate / 1000.0f * 2 * PI;  // map dial [0, 1000) -> [0, 2PI)
    altDial.setupAnimation(AnimationTextureMapper::Z_ROTATION, alt_dial_pi, TICKS_CONT_ANIMATION, 0, EasingEquations::cubicEaseInOut);
    altDial.startAnimation();
    // determine drum animation direction
    if (altForUpdate > altBefore) {
        // ScrollWheel w/ Circular option will animate forward for indexes
        // up to 1 rev ahead but stumbles on 2+ rev
        alt_drum_dir_idx = DRUM_ITEMS;
    }
    else if (altForUpdate < altBefore) {
        alt_drum_dir_idx = -DRUM_ITEMS;
    }
    else {
        alt_drum_dir_idx = 0;
    }
    // drum
    alt_drum_10k_idx = (altForUpdate / 10000) %  DRUM_ITEMS;
    alt_drum_10k_idx += alt_drum_dir_idx;
    altDrum10k.animateToItem(alt_drum_10k_idx, TICKS_CONT_ANIMATION);
    alt_drum_1k_idx = (altForUpdate / 1000) % DRUM_ITEMS;
    alt_drum_1k_idx += alt_drum_dir_idx;
    altDrum1k.animateToItem(alt_drum_1k_idx, TICKS_CONT_ANIMATION);
    alt_drum_100_idx = (altForUpdate / 100) % DRUM_ITEMS;
    alt_drum_100_idx += alt_drum_dir_idx;
    altDrum100.animateToItem(alt_drum_100_idx, TICKS_CONT_ANIMATION);
}

// Screen1ViewBase sets this up as callback for changes to altDrum10 k
void Screen1View::altDrum10kUpdateItem(altDrumContainer& item, int16_t itemIndex)
{
    updateDrumImageX(item, itemIndex);
}

// Screen1ViewBase sets this up as callback for changes to altDrum1k
void Screen1View::altDrum1kUpdateItem(altDrumContainer& item, int16_t itemIndex)
{
    updateDrumImage0(item, itemIndex);
}

// Screen1ViewBase sets this up as callback for changes to altDrum100
void Screen1View::altDrum100UpdateItem(altDrumContainer& item, int16_t itemIndex)
{
    updateDrumImage0(item, itemIndex);
}

// Screen1ViewBase sets this up as callback for changes to altKollsmanInHg
void Screen1View::altKollsmanInHgUpdateItem(altKollsmanContainer& item, int16_t itemIndex)
{
    item.updateText(inHgStrings[itemIndex]);
    // capture the new selected item, not what we are currently loading
    int16_t selected_idx = altKollsmanInHg.getSelectedItem();
    presenter->notifyKollsmanIdx(selected_idx);
    // also update other kollsman window to match
    altKollsmanMbar.animateToItem(selected_idx, TICKS_CONT_ANIMATION);
}

// Screen1ViewBase sets this up as callback for changes to altKollsmanMbar
void Screen1View::altKollsmanMbarUpdateItem(altKollsmanContainer& item, int16_t itemIndex)
{
    item.updateText(mbarStrings[itemIndex]);
    // capture the new selected item, not what we are currently loading
    int16_t selected_idx = altKollsmanMbar.getSelectedItem();
    presenter->notifyKollsmanIdx(selected_idx);
    // also update other kollsman window to match
    altKollsmanInHg.animateToItem(selected_idx, TICKS_CONT_ANIMATION);
}

void Screen1View::updateDrumImage0(altDrumContainer& item, int16_t itemIndex) {
    Bitmap drum_bitmap;
    switch(itemIndex) {
    case 1:
        drum_bitmap = Bitmap(BITMAP_DRUM_1_ID);
        break;
    case 2:
        drum_bitmap = Bitmap(BITMAP_DRUM_2_ID);
        break;
    case 3:
        drum_bitmap = Bitmap(BITMAP_DRUM_3_ID);
        break;
    case 4:
        drum_bitmap = Bitmap(BITMAP_DRUM_4_ID);
        break;
    case 5:
        drum_bitmap = Bitmap(BITMAP_DRUM_5_ID);
        break;
    case 6:
        drum_bitmap = Bitmap(BITMAP_DRUM_6_ID);
        break;
    case 7:
        drum_bitmap = Bitmap(BITMAP_DRUM_7_ID);
        break;
    case 8:
        drum_bitmap = Bitmap(BITMAP_DRUM_8_ID);
        break;
    case 9:
        drum_bitmap = Bitmap(BITMAP_DRUM_9_ID);
        break;
    default:
        drum_bitmap = Bitmap(BITMAP_DRUM_0_ID);
        break;
    }
    item.updateImage(drum_bitmap);
}

void Screen1View::updateDrumImageX(altDrumContainer& item, int16_t itemIndex) {
    Bitmap drum_bitmap;
    switch(itemIndex) {
    case 1:
        drum_bitmap = Bitmap(BITMAP_DRUM_1_ID);
        break;
    case 2:
        drum_bitmap = Bitmap(BITMAP_DRUM_2_ID);
        break;
    case 3:
        drum_bitmap = Bitmap(BITMAP_DRUM_3_ID);
        break;
    case 4:
        drum_bitmap = Bitmap(BITMAP_DRUM_4_ID);
        break;
    case 5:
        drum_bitmap = Bitmap(BITMAP_DRUM_5_ID);
        break;
    case 6:
        drum_bitmap = Bitmap(BITMAP_DRUM_6_ID);
        break;
    case 7:
        drum_bitmap = Bitmap(BITMAP_DRUM_7_ID);
        break;
    case 8:
        drum_bitmap = Bitmap(BITMAP_DRUM_8_ID);
        break;
    case 9:
        drum_bitmap = Bitmap(BITMAP_DRUM_9_ID);
        break;
    default:
        drum_bitmap = Bitmap(BITMAP_DRUM_X_ID);
        break;
    }
    item.updateImage(drum_bitmap);
}

const char * Screen1View::inHgStrings[KOLLSMAN_ITEMS] = {
    "28.05\0",
    "28.08\0",
    "28.11\0",
    "28.14\0",
    "28.17\0",
    "28.20\0",
    "28.23\0",
    "28.26\0",
    "28.29\0",
    "28.32\0",
    "28.35\0",
    "28.38\0",
    "28.41\0",
    "28.44\0",
    "28.47\0",
    "28.50\0",
    "28.53\0",
    "28.56\0",
    "28.59\0",
    "28.61\0",
    "28.64\0",
    "28.67\0",
    "28.70\0",
    "28.73\0",
    "28.76\0",
    "28.79\0",
    "28.82\0",
    "28.85\0",
    "28.88\0",
    "28.91\0",
    "28.94\0",
    "28.97\0",
    "29.00\0",
    "29.03\0",
    "29.06\0",
    "29.09\0",
    "29.12\0",
    "29.15\0",
    "29.18\0",
    "29.21\0",
    "29.23\0",
    "29.26\0",
    "29.29\0",
    "29.32\0",
    "29.35\0",
    "29.38\0",
    "29.41\0",
    "29.44\0",
    "29.47\0",
    "29.50\0",
    "29.53\0",
    "29.56\0",
    "29.59\0",
    "29.62\0",
    "29.65\0",
    "29.68\0",
    "29.71\0",
    "29.74\0",
    "29.77\0",
    "29.80\0",
    "29.83\0",
    "29.85\0",
    "29.88\0",
    "29.91\0",
    "29.94\0",
    "29.97\0",
    "30.00\0",
    "30.03\0",
    "30.06\0",
    "30.09\0",
    "30.12\0",
    "30.15\0",
    "30.18\0",
    "30.21\0",
    "30.24\0",
    "30.27\0",
    "30.30\0",
    "30.33\0",
    "30.36\0",
    "30.39\0",
    "30.42\0",
    "30.45\0",
    "30.47\0",
    "30.50\0",
    "30.53\0",
    "30.56\0",
    "30.59\0",
    "30.62\0",
    "30.65\0",
    "30.68\0",
    "30.71\0",
    "30.74\0",
    "30.77\0",
    "30.80\0",
    "30.83\0",
    "30.86\0",
    "30.89\0",
    "30.92\0",
    "30.95\0",
    "30.98\0",
    "31.01\0",
};

const char * Screen1View::mbarStrings[KOLLSMAN_ITEMS] = {
    "0950\0",
    "0951\0",
    "0952\0",
    "0953\0",
    "0954\0",
    "0955\0",
    "0956\0",
    "0957\0",
    "0958\0",
    "0959\0",
    "0960\0",
    "0961\0",
    "0962\0",
    "0963\0",
    "0964\0",
    "0965\0",
    "0966\0",
    "0967\0",
    "0968\0",
    "0969\0",
    "0970\0",
    "0971\0",
    "0972\0",
    "0973\0",
    "0974\0",
    "0975\0",
    "0976\0",
    "0977\0",
    "0978\0",
    "0979\0",
    "0980\0",
    "0981\0",
    "0982\0",
    "0983\0",
    "0984\0",
    "0985\0",
    "0986\0",
    "0987\0",
    "0988\0",
    "0989\0",
    "0990\0",
    "0991\0",
    "0992\0",
    "0993\0",
    "0994\0",
    "0995\0",
    "0996\0",
    "0997\0",
    "0998\0",
    "0999\0",
    "1000\0",
    "1001\0",
    "1002\0",
    "1003\0",
    "1004\0",
    "1005\0",
    "1006\0",
    "1007\0",
    "1008\0",
    "1009\0",
    "1010\0",
    "1011\0",
    "1012\0",
    "1013\0",
    "1014\0",
    "1015\0",
    "1016\0",
    "1017\0",
    "1018\0",
    "1019\0",
    "1020\0",
    "1021\0",
    "1022\0",
    "1023\0",
    "1024\0",
    "1025\0",
    "1026\0",
    "1027\0",
    "1028\0",
    "1029\0",
    "1030\0",
    "1031\0",
    "1032\0",
    "1033\0",
    "1034\0",
    "1035\0",
    "1036\0",
    "1037\0",
    "1038\0",
    "1039\0",
    "1040\0",
    "1041\0",
    "1042\0",
    "1043\0",
    "1044\0",
    "1045\0",
    "1046\0",
    "1047\0",
    "1048\0",
    "1049\0",
    "1050\0",
};
