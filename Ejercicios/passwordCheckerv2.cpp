#include <iostream>
#include "mis-funciones.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int intentos = askForRetries();
    cout << "Valor Intentos: " << intentos << endl;
    cout << "Direccion de Intentos: " << &intentos << endl;

    int *soyUnPuntero = &intentos;
    cout << "Direccion de puntero: " << soyUnPuntero << endl;
    cout << "Valor de puntero: " << *soyUnPuntero << endl;
    soyUnPuntero++;
    cout << "Direccion de puntero despues de incremetar: " << soyUnPuntero << endl;
    cout << "Valor de puntero despues de incrementar: " << *soyUnPuntero << endl;

    return 0;
}
