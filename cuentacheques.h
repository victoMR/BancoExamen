#ifndef CUENTACHEQUES_H
#define CUENTACHEQUES_H
#include "cuenta.h"
class CuentaCheques:public Cuenta
{
private:
    double cuota=0.0;
public:
    CuentaCheques(double,double);
    void imp();
};

#endif // CUENTACHEQUES_H
