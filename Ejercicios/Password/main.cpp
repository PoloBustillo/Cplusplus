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

        int tamanio = 0;
        do
        {
            if (verificarString[tamanio] != passwordString[tamanio])
            {
                cout << "No son iguales en posicion : " << tamanio << endl;
                break;
            }
            tamanio++;

        } while (tamanio < 4);

        if (tamanio == 4)
        {
            cout << tamanio << endl;
            cout << "Password correcta" << endl;
        }
        else
        {
            cout << "Password incorrecta" << endl;
        }

        intentos--;
    } while (intentos > 0);

    return 0;
}
