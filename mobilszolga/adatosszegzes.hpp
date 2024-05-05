#ifndef ADATOSSZEGZES_HPP_INCLUDED
#define ADATOSSZEGZES_HPP_INCLUDED
#include "ugyfelitem.hpp"
#include "ugyfelbeolvaso.hpp"
#include "forgalombeolvaso.hpp"
#include "ugyfelkereso.hpp"

class AdatOsszegzes {
    UgyfelBeolvaso ugyfelBeolvaso;
    ForgalomBeolvaso forgalomBeolvaso;
    UgyfelKereso ugyfelKereso;
public:
    AdatOsszegzes(UgyfelBeolvaso ub, ForgalomBeolvaso fb, UgyfelKereso uk);
    void osszegez(char* fileUgyfelek, char* fileForgalom, char* eredmenyek);
};

#endif // ADATOSSZEGZES_HPP_INCLUDED
