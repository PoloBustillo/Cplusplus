#include <iostream>
#include "mis-funciones.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int intentos = askForRetries();
    cout << "Intentos: " << intentos << endl;

    // char password[5] = {'1', '2', '3', '4', '\0'};
    // char password[4] = {'1', '2', '3', '4'};
    char password[5] = {"1234"};
    cout << "Password[2]: " << password[2] << endl; // Que valor toma?
    cout << "Password[0]: " << password[0] << endl; // Que valor toma?
    cout << "Password: " << password << endl;

    string passwordString = password;                           // Son equivalentes?
    cout << "PasswordString[2]: " << passwordString[2] << endl; // Que valor toma?
    cout << "PasswordString[0]: " << passwordString[0] << endl; // Que valor toma?
    cout << "PasswordString: " << passwordString << endl;

    // cout << "PasswordString[60]: " << passwordString[60] << endl;
    // cout << "Password[60]: " << password[60] << endl;

    string verificarString;
    // char verificarString[5];

    cout << "Ingrese password para ingresar: " << endl;
    cin >> verificarString;
    cout << "Password ingresada: " << verificarString << endl;
    // cout << "Tamanio: " << verificarString.length() << endl;
    // cout << "Comparar: " << verificarString.compare("1234") << endl;

    return 0;
}
