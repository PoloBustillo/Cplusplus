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
    cout << "Password[2]: " << password[2] << endl;
    cout << "Password[0]: " << password[0] << endl;
    cout << "Password: " << password << endl;

    string passwordString = "1234";
    cout << "PasswordString[2]: " << passwordString[2] << endl;
    cout << "PasswordString[0]: " << passwordString[0] << endl;
    // cout << "PasswordString[60]: " << passwordString[60] << endl;
    // cout << "Password[60]: " << password[60] << endl;

    return 0;
}
