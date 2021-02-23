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
        altDialPi = (altitude % 1000) / 1000.0f * 2 * PI;  // map dial [0, 1000) -> [0, 2PI)
        altDial.setupAnimation(AnimationTextureMapper::Z_ROTATION, altDialPi, TICKS_CONT_ANIMATION, 0, EasingEquations::cubicEaseInOut);
        altDial.startAnimation();
    }
}
