#ifndef FORGALOM_HPP_INCLUDED
#define FORGALOM_HPP_INCLUDED

class Forgalom{
    int telszam;
    int smsdb;
    int percek;
public:
    Forgalom(int telszam, int smsdb, int percek);
    void kiir();
    ~Forgalom();
};

#endif // FORGALOM_HPP_INCLUDED
