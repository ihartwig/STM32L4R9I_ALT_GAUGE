#ifndef ALTDRUMCONTAINER_HPP
#define ALTDRUMCONTAINER_HPP

#include <gui_generated/containers/altDrumContainerBase.hpp>

class altDrumContainer : public altDrumContainerBase
{
public:
    altDrumContainer();
    virtual ~altDrumContainer() {}

    virtual void initialize();
protected:
};

#endif // ALTDRUMCONTAINER_HPP
