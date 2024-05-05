#ifndef UGYFELBEOLVASO_HPP_INCLUDED
#define UGYFELBEOLVASO_HPP_INCLUDED

#include "dijcsomagmeghatarozo.hpp"

class UgyfelBeolvaso{
public:
    UgyfelBeolvaso(DijCsomagMeghatarozo d);
    UgyfelItem* beolvas(char* filename);
    ~UgyfelBeolvaso();
};

#endif // UGYFELBEOLVASO_HPP_INCLUDED
