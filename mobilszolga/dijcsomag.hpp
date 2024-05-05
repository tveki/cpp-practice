#ifndef DIJCSOMAG_HPP_INCLUDED
#define DIJCSOMAG_HPP_INCLUDED

class DijCsomag {
protected:
    int smsdij;
    int percdij;

public:
    DijCsomag(int smsdij, int percdij);
    virtual int dijszamitas(int smsdb, int percek) = 0;
    virtual ~DijCsomag();
};

class SMSMax : public DijCsomag {
public:
    SMSMax(int smsdij, int percdij):DijCsomag(smsdij, percdij){}
    int dijszamitas(int smsdb, int percek) override;
    ~SMSMax();
};

class Alap : public DijCsomag {
public:
    Alap(int smsdij, int percdij):DijCsomag(smsdij, percdij){}
    int dijszamitas(int smsdb, int percek) override;
    ~Alap();
};

class MobiNet : public DijCsomag {
public:
    MobiNet(int smsdij, int percdij):DijCsomag(smsdij, percdij){}
    int dijszamitas(int smsdb, int percek) override;
    ~MobiNet();
};


#endif // DIJCSOMAG_HPP_INCLUDED
