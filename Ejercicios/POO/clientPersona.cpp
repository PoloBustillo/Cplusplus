#include <iostream>
#include "Persona.h"
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    string nombrePedro = "Pedro";
    Persona juanito = Persona();
    Persona pedrito = Persona(nombrePedro);
    Persona maria_mario = Persona("Maria");

    cout << sum(3, 5) << endl;

    maria_mario.setNombre("Mario");
    cout << maria_mario.getNombre() << endl;
    return 0;
}