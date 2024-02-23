#include <iostream>
#include <string>
using namespace std;

class Carro
{
private:
    double capacidad;
    // atributos
public:
    int numeroPuertas; // 5 1000l 4 900l
    string color;
    string marca;
    int asientos;

    // metodos
public:
    // SETTERS
    void setCapacidad(int capacidad)
    {
        this->capacidad = capacidad;
    }
    // GETTERS
    int getCapacidad()
    {
        return capacidad;
    }
    double calcularCapacidad()
    {
        if (numeroPuertas == 5)
        {
            capacidad = 1500;
            return 1500;
        }
        else
        {
            capacidad = 900;
            return 900;
        }
    }
    bool arrancar()
    {
        cout << "Arrancando el carro" << endl;
        return true;
    }

    bool prenderFaros()
    {
        cout << "Prendiendo faros" << endl;
        return true;
    }
    void sonarClaxon()
    {
        cout << "TUUUUUUUU " << endl;
        cout << "\a" << endl;
    }
};

int main()
{
    Carro jetta;
    Carro bocho;
    Carro tsuru;
    jetta.color = "Rojo";
    jetta.sonarClaxon();
    tsuru.numeroPuertas = 5;
    tsuru.setCapacidad(2000);
    cout << tsuru.getCapacidad() << endl;
    tsuru.calcularCapacidad();
    cout << tsuru.getCapacidad() << endl;
    tsuru.numeroPuertas = 4;
    tsuru.calcularCapacidad();
    tsuru.calcularCapacidad();
    tsuru.calcularCapacidad();
    tsuru.calcularCapacidad();
    return 0;
}