#ifndef SCREEN1_VIEW_HPP
#define SCREEN1_VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/containers/clock/AnalogClock.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextureMapper.hpp>
#include <touchgfx/widgets/AnimationTextureMapper.hpp>

#define TICKS_PER_SEC 108
#define TICKS_CONT_ANIMATION ((TICKS_PER_SEC/4)+TICKS_PER_SEC)
#define KOLLSMAN_ITEMS 101

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
    void setupHand(TextureMapper& hand, const BitmapId bitmapId, int16_t clockRotationCenterX, int16_t clockRotationCenterY, int16_t rotationCenterX, int16_t rotationCenterY);
    virtual void altDrum10kUpdateItem(altDrumContainer& item, int16_t itemIndex);
    virtual void altDrum1kUpdateItem(altDrumContainer& item, int16_t itemIndex);
    virtual void altDrum100UpdateItem(altDrumContainer& item, int16_t itemIndex);
    virtual void altKollsmanInHgUpdateItem(altKollsmanContainer& item, int16_t itemIndex);
    virtual void altKollsmanMbarUpdateItem(altKollsmanContainer& item, int16_t itemIndex);

protected:

    int tickCounter;
    int hours;
    int minutes;
    int seconds;
    float humidityEntropi;
    float pressureEntropi;
    int altitude;
    float altDialPi;
    static void updateDrumImage0(altDrumContainer& item, int16_t itemIndex);
    static void updateDrumImageX(altDrumContainer& item, int16_t itemIndex);
    static const char * inHgStrings[];
    static const char * mbarStrings[];
};

#endif // SCREEN1_VIEW_HPP
