#include <iostream>
using namespace std;

void despliegaMenu()
{
    cout << "1. Crear persona" << endl;
    cout << "2. Modificar persona" << endl;
    cout << "3. Eliminar persona" << endl;
    cout << "4. Salir" << endl;
    cout << "Opcion: ";
}

int eligeOpcionDelMenu()
{
    // Scope
    int opcion = 2;
    return opcion;
}

bool eliminaPersona(string name, string apellido)
{
    cout << "Eliminando persona " << name << apellido << endl;
    return true;
}

bool eliminaPersona(string name)
{
    cout << "Eliminando persona " << name << endl;
    return true;
}