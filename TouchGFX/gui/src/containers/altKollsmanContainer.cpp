#include <gui/containers/altKollsmanContainer.hpp>

altKollsmanContainer::altKollsmanContainer()
{
}

void altKollsmanContainer::initialize()
{
    altKollsmanContainerBase::initialize();
}

void altKollsmanContainer::updateText(const char * textForUpdate)
{
    Unicode::strncpy(wildcardBuf, textForUpdate, WILDCARD_BUF_LEN);
    text.setWildcard(wildcardBuf);
    text.invalidate();
}
