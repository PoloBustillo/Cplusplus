#include <iostream>
#include "mis-funciones.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int intentos = askForRetries();
    cout << "Intentos: " << intentos << endl;

    string passwordString = "1234";
    string verificarString;

    while (intentos > 0)
    {
        cout << "Ingresa con la password: " << endl;
        cin >> verificarString;
        int auxiliar = 0;
        while (auxiliar < 4)
        {
            if (verificarString[auxiliar] != passwordString[auxiliar])
            {
                cout << "Password incorrecta" << endl;
                break;
            }
            else if (auxiliar == 3)
            {
                cout << "Password correcta" << endl;
                break;
            }
            auxiliar++;
        }
        intentos--;
    }
    return 0;
}
