#include "cuentacheques.h"

CuentaCheques::CuentaCheques(double sald , double com):Cuenta(sald)
{
    setSaldCu(sald);
    this->cuota=com;

}
void CuentaCheques::imp(){
    double com=51.26;
    double op=0.0;
    double op1=0.0;
    Cuenta::abonar();
    op= getSaldCu()-com;
    cout<<"Has hecho una operacion ahora tu saldo total es de = "<<op<<endl;
   // cout <<"Has hecho una operacion ahora tu saldo total es de = "<<tot<<endl;

    Cuenta::cargar();
    op1=getTot()-com;
    cout<<"Has hecho una operacion ahora tu saldo total es de = "<<op1<<endl;
   // if (ret<tot) {
       // cout <<"Has hecho una operacion ahora tu saldo total es de = "<<tot<<endl;
    }
    //else {
       // cout <<"NO RERTIRASRE NADA "<<endl;
    //}

