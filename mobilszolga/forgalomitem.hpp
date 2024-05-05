#ifndef FORGALOMITEM_HPP_INCLUDED
#define FORGALOMITEM_HPP_INCLUDED
#include "forgalom.hpp"

class ForgalomItem{
    Forgalom forgalom;
    ForgalomItem* kov;
public:
    ForgalomItem(Forgalom f);
    ~ForgalomItem();
};

#endif // FORGALOMITEM_HPP_INCLUDED
