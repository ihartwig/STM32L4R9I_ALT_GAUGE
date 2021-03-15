#include <gui/containers/altDrumContainer.hpp>
#include "BitmapDatabase.hpp"

altDrumContainer::altDrumContainer()
{

}

void altDrumContainer::initialize()
{
    altDrumContainerBase::initialize();
}

void altDrumContainer::updateImage(const Bitmap &bitmapForUpdate) {
    image.setBitmap(bitmapForUpdate);
    image.invalidate();
}
