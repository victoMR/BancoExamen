#include "cuenta.h"
Cuenta::Cuenta(double sald){
    setSaldCu(sald);
}
double Cuenta::getTot() const
{
    return tot;
}

void Cuenta::setTot(double newTot)
{
    tot = newTot;
}


double Cuenta::getSaldCu() const
{
    return SaldCu;
}

void Cuenta::setSaldCu(double newSaldCu)
{
    if (newSaldCu<=0.0) {
        cout<<"Sin saldo disponible\n";
    }
    else {
        SaldCu=newSaldCu;
    }
}
void Cuenta::abonar(){
    double mont=0.0;
    tot = mont +SaldCu;
}
void Cuenta::cargar(){
    cout <<"Cuanto deseas retirar ? = ";
    cin>>ret;
    if (ret>=tot) {
        cout <<"El monto a cargar excedio el saldo de la cuenta."<<"Tu saldo es de = "<<tot<<endl;
    }
    else {
        cout <<"Retiraras = "<<ret<<" De tu saldo de ="<<SaldCu<<endl;
        tot = tot-ret;
        cout <<"Retirado ="<<tot<<endl;
    }
}
