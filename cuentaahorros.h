#ifndef CUENTAAHORROS_H
#define CUENTAAHORROS_H
#include "cuenta.h"
class CuentaAhorros:public Cuenta
{
private:
    double interes=0;
public:
    CuentaAhorros(double,double);
    void calcularInteres();
};

#endif // CUENTAAHORROS_H
