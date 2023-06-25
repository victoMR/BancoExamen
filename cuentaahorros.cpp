#include "cuentaahorros.h"

CuentaAhorros::CuentaAhorros(double sald, double interes):Cuenta(sald)
{
    setSaldCu(sald);
    this->interes=interes;
}

void CuentaAhorros::calcularInteres(){
    interes=.10;
    double tot1=0.0;
    tot1 = getSaldCu()*interes;
    cout <<"El interes es de = "<<interes<<endl;
    cout <<"La cuenta con interes de ="<<tot1<<endl;
}
