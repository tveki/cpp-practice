#include <iostream>
#include <fstream>
#include "ugyfel.h"
#include "adatosszegzes.h"

using namespace std;

int main() {
    // Ügyfelek létrehozása
    DijCsomag* csomag1 = new SMSMax();
    DijCsomag* csomag2 = new Alap();
    Ugyfel ugyfel1(123456789, "Kovács Péter", "Budapest", csomag1);
    Ugyfel ugyfel2(987654321, "Nagy Anna", "Debrecen", csomag2);

    // Havi forgalmi adatok beolvasása
    ifstream adatokFile("havi_adatok.txt");
    if (!adatokFile.is_open()) {
        cerr << "Hiba: Nem sikerült megnyitni a fájlt!" << endl;
        return 1;
    }

    int telszam, smsdb, percek;
    while (adatokFile >> telszam >> smsdb >> percek) {
        // Ügyfél keresése a megfelelő telefonszámmal
        // És hívás a dijszamitas függvényre
    }
    adatokFile.close();

    // Díjszámítás és eredmények kiírása
    AdatOsszegzes adatOsszegzes;
    adatOsszegzes.osszegez();

    return 0;
}
