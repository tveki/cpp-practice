#include <iostream>
#include "ugyfel.hpp" // Az Ugyfel osztály fejlécfájlja
#include "adatosszegzes.hpp" // Az adatösszegzésért felelős osztály fejlécfájlja
#include "dijcsomag.hpp"
#include "dijcsomagmeghatarozo.hpp"
#include "forgalom.hpp"
#include "forgalombeolvaso.hpp"
#include "forgalomitem.hpp"
#include "ugyfelbeolvaso.hpp"
#include "ugyfelitem.hpp"

int main() {
    DijCsomagMeghatarozo d;
    UgyfelBeolvaso ugyfelBeolvaso(d);
    ForgalomBeolvaso forgalomBeolvaso;

    UgyfelKereso ugyfelKereso;

    AdatOsszegzes adatOsszegzes(ugyfelBeolvaso, forgalomBeolvaso, ugyfelKereso);

    adatOsszegzes.osszegez("ugyfelek.txt", "havi_adatok.txt", "eredmenyek.txt");

    return 0;
}

/*int main() {
    DijCsomagMeghatarozo d;

    UgyfelBeolvaso ugyfelBeolvaso(d);
    ForgalomBeolvaso forgalomBeolvaso;
    AdatOsszegzes adatOsszegzes(ugyfelBeolvaso, forgalomBeolvaso);

    // Adatösszegzés elvégzése
    adatOsszegzes.osszegez("ugyfelek.txt", "havi_adatok.txt", "eredmenyek.txt");

    // Memóriakezelés: felszabadítjuk a dinamikusan foglalt memóriát


    return 0;
}*/
