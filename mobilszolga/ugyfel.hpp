#ifndef UGYFEL_HPP_INCLUDED
#define UGYFEL_HPP_INCLUDED

#include "dijcsomag.hpp"

class Ugyfel {
private:
    int telszam;
    char* nev;
    char* cim;
    DijCsomag* csomag;

public:
    Ugyfel(int telszam, const char* nev, const char* cim, DijCsomag* csomag);
    void kiir();
    ~Ugyfel();
};

#endif // UGYFEL_HPP_INCLUDED
