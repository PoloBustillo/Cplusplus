#include <iostream>
#include "mis-funciones.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int intentos = askForRetries();
    cout << "Intentos: " << intentos << endl;

    string passwordString = "1234";
    string verificarString;

    for (int i = 0; i < intentos; i++)
    {
        cout << "Ingrese password para ingresar: " << endl;
        cin >> verificarString;
        for (int j = 0; j < 4; j++)
        {
            if (verificarString[j] != passwordString[j])
            {
                cout << "Password incorrecta" << endl;
                break;
            }
            else if (j == 3)
            {
                cout << "Password correcta" << endl;
                break;
            }
        }
    }

    return 0;
}
