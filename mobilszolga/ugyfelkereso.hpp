#ifndef UGYFELKERESO_HPP_INCLUDED
#define UGYFELKERESO_HPP_INCLUDED

#include "ugyfelitem.hpp"
#include "ugyfelbeolvaso.hpp"
#include "forgalombeolvaso.hpp"

class UgyfelKereso{
public:
    UgyfelKereso();
    Ugyfel keres(UgyfelItem u, int telszam);
    ~UgyfelKereso();

};

#endif // UGYFELKERESO_HPP_INCLUDED
