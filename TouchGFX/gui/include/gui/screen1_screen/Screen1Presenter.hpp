#ifndef SCREEN1_PRESENTER_HPP
#define SCREEN1_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen1View;

class Screen1Presenter : public Presenter, public ModelListener
{
public:
    Screen1Presenter(Screen1View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Screen1Presenter() {};

    virtual void notifyAltitude(int newAltitudeFt);
    virtual void notifyKollsmanIdx(int newKollsmanIdx);

private:
    Screen1Presenter();

    Screen1View& view;

    // retain the last altitude displayed to determine inc/dec
    int altitudeFt;
    int kollsmanIdx;
};

#endif // SCREEN1_PRESENTER_HPP
