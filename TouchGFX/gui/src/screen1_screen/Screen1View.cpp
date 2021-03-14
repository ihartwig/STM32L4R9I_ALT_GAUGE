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
	altitude(0),
	altDialPi(0.0f)
{
}


void Screen1View::setupScreen()
{
    HAL::getInstance()->setFrameRateCompensation(true);
    altKollsmanInHg.animateToItem(20, 0); // invoke callback to init text
    altKollsmanMbar.animateToItem(20, 0); // invoke callback to init text
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
        altitude = tickCounter;
        altDialPi = altitude / 1000.0f * 2 * PI;  // map dial [0, 1000) -> [0, 2PI)
        altDial.setupAnimation(AnimationTextureMapper::Z_ROTATION, altDialPi, TICKS_CONT_ANIMATION, 0, EasingEquations::cubicEaseInOut);
        altDial.startAnimation();
    }
}

// Screen1ViewBase sets this up as callback for changes to altKollsmanInHg
void Screen1View::altKollsmanInHgUpdateItem(altKollsmanContainer& item, int16_t itemIndex)
{
    item.updateText(inHgStrings[itemIndex]);
}

// Screen1ViewBase sets this up as callback for changes to altKollsmanInHg
void Screen1View::altKollsmanMbarUpdateItem(altKollsmanContainer& item, int16_t itemIndex)
{
    item.updateText(mbarStrings[itemIndex]);
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
