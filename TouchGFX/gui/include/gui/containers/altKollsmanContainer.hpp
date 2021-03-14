#ifndef ALTKOLLSMANCONTAINER_HPP
#define ALTKOLLSMANCONTAINER_HPP

#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

#include <gui_generated/containers/altKollsmanContainerBase.hpp>

#define WILDCARD_BUF_LEN 6

class altKollsmanContainer : public altKollsmanContainerBase
{
public:
    altKollsmanContainer();
    virtual ~altKollsmanContainer() {}
    virtual void initialize();
    virtual void updateText(const char * textForUpdate);
protected:

    Unicode::UnicodeChar wildcardBuf[WILDCARD_BUF_LEN];
};

#endif // ALTKOLLSMANCONTAINER_HPP
