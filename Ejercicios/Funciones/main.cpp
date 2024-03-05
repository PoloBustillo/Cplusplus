#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{

    despliegaMenu();
    int opcion = eligeOpcionDelMenu();
    if (opcion == 3)
    {
        eliminaPersona("Juan");
    }
    return 0;
}
