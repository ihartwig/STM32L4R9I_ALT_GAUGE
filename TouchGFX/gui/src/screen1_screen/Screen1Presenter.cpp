#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

Screen1Presenter::Screen1Presenter(Screen1View& v) :
    view(v),
    altitudeFt(0),
    kollsmanIdx(0)
{
}

void Screen1Presenter::activate()
{
    view.updateAltDisplay(altitudeFt, altitudeFt);
    // TODO load current kollsman values
}

void Screen1Presenter::deactivate()
{
}

// Forward new altitude info from model to view
void Screen1Presenter::notifyAltitude(int newAltitudeFt) {
    view.updateAltDisplay(newAltitudeFt, altitudeFt);
    altitudeFt = newAltitudeFt;
}

// Forward new kollsman setting from view to model
void Screen1Presenter::notifyKollsmanIdx(int newKollsmanIdx) {
    model->setKollsmanIdx(newKollsmanIdx);
}
