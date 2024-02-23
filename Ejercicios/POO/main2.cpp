#include <iostream>
using namespace std;

class Persona
{
protected:
    string nombre;
    int edad;
    int altura;

public:
    // Sobrecarga de constructores -> Polimorfismo
    Persona(string name)
    {
        nombre = name;
    }
    Persona(string name, int age)
    {
        nombre = name;
        edad = age;
    }
};

class Deportista : public Persona
{
};

int main()
{
    Persona p1("Juan");
    Persona p2("Pedro", 20);
    Deportista d1("Juan");
    d1.cout << p1.nombre << endl;
    cout << p2.nombre << endl;
    cout << p2.edad << endl;
    return 0;
}