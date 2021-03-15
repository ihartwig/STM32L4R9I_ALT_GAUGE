#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() :
    modelListener(0),
    tickCounter(0),
    altitudeFt(0),
    kollsmanIdx(0)
{
}

void Model::tick()
{
    ++tickCounter;
    if (tickCounter % TICKS_PER_SEC == 0)
    {
        altitudeFt = tickCounter;
        modelListener->notifyAltitude(altitudeFt);
    }
}

void Model::setKollsmanIdx(int newKollsmanIdx) {
    kollsmanIdx = newKollsmanIdx;
    // TODO: update the calculated altimeter value
}
