#ifndef DIJCSOMAG_H_INCLUDED
#define DIJCSOMAG_H_INCLUDED

class DijCsomag {
protected:
    int smsdij;
    int percdij;

public:
    virtual int dijszamitas(int smsdb, int percek) = 0;
};

class SMSMax : public DijCsomag {
public:
    int dijszamitas(int smsdb, int percek) override;
};

class Alap : public DijCsomag {
public:
    int dijszamitas(int smsdb, int percek) override;
};

class MobiNet : public DijCsomag {
public:
    int dijszamitas(int smsdb, int percek) override;
};


#endif // DIJCSOMAG_H_INCLUDED
