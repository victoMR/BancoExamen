#include <QCoreApplication>
#include "cuentaahorros.h"
#include "cuentacheques.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Cuenta *Aho = new Cuenta(50.20);
    Aho->abonar();
    Aho->cargar();

    Cuenta *Check = new Cuenta(50.20);
    Check->abonar();
    Check->cargar();
    return a.exec();
}
