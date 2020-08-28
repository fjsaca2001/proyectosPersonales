#include <iostream>
using namespace std;
class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string, int);
    void mostar();
};

Persona::Persona(string nombre1, int edad1)
{
    nombre = nombre1;
    edad = edad1;
}
void Persona::mostar()
{
    cout << "\tNombre: " << nombre << "\n\tEdad: " << edad << endl;
}
class Empleado : public Persona
{
private:
    double salario;

public:
    Empleado(string, int, double);
    void mostrarEmp();
};

Empleado::Empleado(string nombre1, int edad1, double salario1) : Persona(nombre1, edad1)
{
    salario = salario1;
}

void Empleado::mostrarEmp()
{
    cout << "Empleado " << endl;
    mostar();
    cout << "\tSalario: " << salario << endl;
}
class Estudiante : public Persona
{
private:
    string carrera;

public:
    Estudiante(string, int, string);
    void mostrarEst();
};

Estudiante::Estudiante(string nombre1, int edad1, string carrera1) : Persona(nombre1, edad1)
{
    carrera = carrera1;
}
void Estudiante::mostrarEst()
{
    cout << "Estudiante " << endl;
    mostar();
    cout << "\tCarrera: " << carrera << endl;
}
class Universitario : public Estudiante
{
private:
    int ciclo;

public:
    Universitario(string, int, string, int);
    void mostrarUni();
};

Universitario::Universitario(string nombre1, int edad1, string carrera1, int ciclo1) : Estudiante(nombre1, edad1, carrera1)
{
    ciclo = ciclo1;
}
void Universitario::mostrarUni()
{
    mostrarEst();
    cout << "\tCiclo: " << ciclo << endl;
}
int main()
{
    Empleado emp("Frank", 19, 365.25);
    emp.mostrarEmp();
    Universitario uni("Joel", 19, "Computación", 4);
    uni.mostrarUni();
    return 0;
}