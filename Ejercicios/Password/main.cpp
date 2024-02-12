#include <iostream>
#include "mis-funciones.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int intentos = askForRetries();
    cout << "Intentos: " << intentos << endl;

    string passwordString = "1234";
    string verificarString;

    do
    {
        cout << "Ingrese password para ingresar: " << endl;
        cin >> verificarString;

        if (verificarString == passwordString)
        {
            cout << "Password correcta, Bienvenido..." << endl;
            break;
        }
        else
        {
            cout << "Password incorrecta, Intentos restantes: " << intentos - 1 << endl;
        }

        intentos--;
    } while (intentos > 0);

    return 0;
}
