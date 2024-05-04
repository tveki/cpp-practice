#ifndef UGYFEL_H_INCLUDED
#define UGYFEL_H_INCLUDED

#include "dijcsomag.h"

class Ugyfel {
private:
    int telszam;
    char* nev;
    char* cim;
    DijCsomag* csomag;

public:
    Ugyfel(int telszam, const char* nev, const char* cim, DijCsomag* csomag);
    ~Ugyfel();
};

#endif // UGYFEL_H_INCLUDED
