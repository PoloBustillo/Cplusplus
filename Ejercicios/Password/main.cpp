#include <iostream>
#include "mis-funciones.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int intentos = askForRetries();
    cout << "Intentos: " << intentos << endl;

    string passwordString = "1234";
    string verificarString;

    switch (intentos)
    {
    case 0:
        cout << "No tiene mas intentos, adios..." << endl;
        break;
    case 1:
        cout << "Master Pro" << endl;
        break;
    case 2:
        cout << "Easy" << endl;
        break;
    case 3:
        cout << "Noob" << endl;
        break;
    default:
        cout << "Me quieres ver la cara de... " << endl;
        intentos = 3;
        break;
    }

    cout << "Ingrese password para ingresar: " << endl;
    cin >> verificarString;

    if (verificarString == passwordString)
    {
        cout << "Password correcta, Bienvenido..." << endl;
    }
    else
    {
        cout << "Password incorrecta, Intentos restantes: " << intentos - 1 << endl;
    }

    /*
    if (verificarString[0] == passwordString[0])
    {
        if (verificarString[1] == passwordString[1])
        {
            if (verificarString[2] == passwordString[2])
            {
                if (verificarString[3] == passwordString[3])
                {
                    cout << "Password correcta, Bienvenido..." << endl;
                }
                else
                {
                    cout << "Password incorrecta, Intentos restantes: " << intentos - 1 << endl;
                }
            }
            else
            {
                cout << "Password incorrecta, Intentos restantes: " << intentos - 1 << endl;
            }
        }
        else
        {
            cout << "Password incorrecta, Intentos restantes: " << intentos - 1 << endl;
        }
    }
    else
    {
        cout << "Password incorrecta, Intentos restantes: " << intentos - 1 << endl;
    }
    */

    return 0;
}
