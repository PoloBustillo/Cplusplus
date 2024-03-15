#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Alumno
{
private:
    string matricula;
    string nombre;
    double promedio;

public:
    Alumno(string mat, string nom, double prom)
    {
        matricula = mat;
        nombre = nom;
        promedio = prom;
    };

    string getAlumnoInfo()
    {
        return "Matricula: " + matricula + " Nombre: " + nombre + " Promedio: " + to_string(promedio) + " Cuota: " + to_string(calcularCuota());
    };

    double calcularCuota()
    {
        if (promedio > 9.0)
        {
            return 100;
        }
        else if (promedio >= 8.5 && promedio <= 8.9)
        {
            return 200;
        }
        else if (promedio < 8.5)
        {
            return 500;
        }
        return 0;
    };
};

class Empleado
{
protected:
    string nombre;
    string idEmpleado;
    double salario;

public:
    Empleado(string nom, string id, double sal)
    {
        nombre = nom;
        idEmpleado = id;
        salario = sal;
    };

    string getNombre()
    {
        return nombre;
    };

    string getId()
    {
        return idEmpleado;
    };

    virtual double calcularSalario() = 0;
};

class Contador : public Empleado
{
private:
    double aniosLaborados;

public:
    Contador(string nombre, string id, double salario, double anios)
        : Empleado(nombre, id, salario)
    {
        aniosLaborados = anios;
    }
    double calcularSalario()
    {
        return salario + (aniosLaborados * (salario * .01));
    }
    double calcularNomina(vector<Empleado *> empleados)
    {
        double nomina = 0;
        for (Empleado *e : empleados)
        {
            nomina = nomina + e->calcularSalario();
        }
        return nomina;
    }
};

class ProfesorTiempoCompleto : public Empleado
{
private:
    double bonoAnt;

public:
    ProfesorTiempoCompleto(string nombre, string id, double salario, double bono)
        : Empleado(nombre, id, salario)
    {
        bonoAnt = bono;
    }
    double calcularSalario()
    {
        return salario + bonoAnt;
    }
};

class ProfesorHoraClase : public Empleado
{
private:
    double horasLaboradas;
    double tarifaHora;

public:
    ProfesorHoraClase(string nombre, string id, double horas, double tarifa)
        : Empleado(nombre, id, 0)
    {
        horasLaboradas = horas;
        tarifaHora = tarifa;
    }
    double calcularSalario()
    {
        return horasLaboradas * tarifaHora;
    }
};

class Escuela
{
private:
    vector<Alumno> alumnos;
    vector<Empleado *> empleados; // Vector de punteros a Empleado
public:
    void agregarAlumno(Alumno a)
    {
        alumnos.push_back(a);
    }

    void agregarEmpleado(Empleado *e)
    {
        empleados.push_back(e);
    }

    void mostrarAlumnos()
    {
        for (Alumno a : alumnos)
        {
            cout << a.getAlumnoInfo() << endl;
        }
    };
    void mostrarEmpleado(string id)
    {
        for (Empleado *e : empleados)
        {
            if (e->getId() == id)
            {
                cout << "Nombre: " << e->getNombre() << " Salario: " << e->calcularSalario() << endl;
                break;
            }
        }
    };

    vector<Empleado *> getEmpleados()
    {
        return empleados;
    };
};

int main()
{
    // Crear escuela
    Escuela universal;

    // Crear alumnos
    Alumno pepito("123", "Pepito", 9.5);
    Alumno alicia("132", "Alicia", 8.7);
    Alumno juan("133", "Juan", 8.0);

    universal.agregarAlumno(pepito);
    universal.agregarAlumno(alicia);
    universal.agregarAlumno(juan);

    // Crear empleados
    Contador contador("Juan", "1", 30000, 4);
    ProfesorTiempoCompleto profesorTiempoCompleto("Marco", "2", 47000, 1000);
    ProfesorHoraClase profesorHoraClase("Luis", "3", 250, 150);

    universal.agregarEmpleado(&contador);
    universal.agregarEmpleado(&profesorTiempoCompleto);
    universal.agregarEmpleado(&profesorHoraClase);
    int opcion = 0;
    string id;

    do
    {
        cout << "Dame una opcion: 1) Mostrar nomina 2) Mostrar info empleado 3) Listado alumnos 4)Salir\n";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "La nomina es: " << contador.calcularNomina(universal.getEmpleados()) << endl;
            break;
        case 2:
            cout << "Dame el id del empleado: ";
            cin >> id;
            universal.mostrarEmpleado(id);
            break;
        case 3:
            universal.mostrarAlumnos();
            break;
        case 4:
            cout << "Adios";
            break;
        default:
            cout << "Opcion no valida\n";
        }
    } while (opcion != 4);

    return 0;
}