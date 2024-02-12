/**
 * @file verifica2.cpp
 * @author Emilio Hernández Ramos
 * @brief Programa que Verifica una contraseña
 * @version 0.1
 * @date 2024-02-07
 *
 */
#include <iostream>

int main(int argc, char const *argv[])
{
    // Declarar Variables

    char contraseña[5]{"mc12"}; // definimos la contraseña oculta como "mc12"
    char ingreso[5] = "    ";   // variable utilizable por el usuario
    int iguales = true;         // empezamos optimistas con una variable booleana, por lo que es igual a 1 (true) o 0 (false)

    // Proceso

    std::cout << "Ingrese contraseña: "; // Se imprime solo una vez; la primera vez que se vaya a ejecutar
    for (int i = 0; i < 3; i++)          // hacer 3 veces significando: 3 intentos de ingresar la contrasena
    {
        // Nota: el signo ' ! ' significa 'no' por lo tanto  '!iguales'  significa  'no iguales'
        if (!iguales) // la primera vez llega la variable optimista por eso no se ejecuta la primera vez
        {
            std::cout << "Contraseña incorrecta, Intentos restantes: " << 3 - i << std::endl
                      << "Vuelve a Intentar: "; // se asume que el primer intento fallo: el mensaje cambia
        }
        std::cin >> ingreso;
        iguales = true;             // Ya que revisaremos si 'ingreso' es DIFERENTE de 'contraseña' empezamos siendo optimistas hasta probar lo contrario
        for (int j = 0; j < 4; j++) // si ningun digito es diferente, 'iguales' se mantiene como 'true'
        {
            // Nota: ' != ' significa 'es diferente de?'
            if (ingreso[j] != contraseña[j]) // somos optimistas y esperamos que no pase
            {
                iguales = false; // se prueba lo contrario
            }
        }            // se verificaron los 4 digitos
        if (iguales) // si la verificación se mantuvo optimista: accedimos
        {
            // Finalizar sin error

            std::cout << "Contraseña correcta, Bienvenido...";
            return 0; // se termina el programa con final "feliz"
        }
    } // si el programa no termino pero este ciclo si, se pasó el límite de intentos pero no se accedió

    // Finalizar con error

    std::cout << "Numero de intentos excedido, Bloqueado!";

    return 1; // se termina el programa con error pues se ha sido bloqueado por intentos fallidos
}