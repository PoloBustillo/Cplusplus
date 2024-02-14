#include <iostream>

using namespace std;

/**
 * Funcion que regresa un entero.
 * La información se la pide al usuario.
 * @return int retries - intentos para verificar password
 */
int askForRetries() // usar camelCase para nombrar funciones.
{
    int tries; // intentos para verificar password
    // pide al usuario un datos
    cout << "Cuantos intentos "
         << "necesitas?: " << endl;
    // guarda el dato en la variable
    cin >> tries;

    /*
        Que pasa si el usuario no ingresa un numero menor a 0?
        Como ponemos usar para saber si es 0<?
        PD: Esto es un comentario de varias lineas
    */
    return tries;
}
