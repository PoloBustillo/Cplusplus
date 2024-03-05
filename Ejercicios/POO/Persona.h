#include <iostream>

using namespace std;

class Persona
{
    // attributes
private:
    string nombre;
    int edad;
    string ine;
    char sexo;
    double peso;
    double altura;
    // constructors: inicializar atributos de nuestro objeto
public:
    Persona()
    {
        cout << "Se ha creado una persona" << endl;
    };
    Persona(string parametroNombre)
    {
        cout << parametroNombre << endl;
        nombre = parametroNombre;
    };
    Persona(string parametroNombre, int parametroEdad)
    {
        cout << parametroNombre << endl;
        nombre = parametroNombre;
        edad = parametroEdad;
    };
    // methods
    void setNombre(string parametroNombre)
    {
        nombre = parametroNombre;
    };
    string getNombre()
    {
        return nombre;
    }
};