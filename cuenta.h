#ifndef CUENTA_H
#define CUENTA_H
#include <iostream>
#include<string>
using namespace std;
class Cuenta
{
private:
    double SaldCu=0;
    double tot=0.0;
    double ret=0.0;

public:
    Cuenta(double);
    double getSaldCu() const;
    void setSaldCu(double newSaldCu);
    virtual void abonar();
    virtual void cargar();
    double getTot() const;
    void setTot(double newTot);
};

#endif // CUENTA_H
