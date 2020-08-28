#include <iostream>
using namespace std;
class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string, int);
    void monstrar();
};

class Alumno : public Persona
{
private:
    string materia, docente;

public:
    Alumno(string, int, string, string);
    void mostrarAlumno();
};

Persona::Persona(string nombre1, int edad1)
{
    nombre = nombre1;
    edad = edad1;
}
void Persona::monstrar()
{
    cout << "Nombre: " << nombre << "\tEdad: " << edad << endl;
}

Alumno::Alumno(string nombre1, int edad1, string materia1, string docente1) : Persona(nombre1, edad1)
{
    materia = materia1;
    docente = docente1;
}
void Alumno::mostrarAlumno()
{
    monstrar();
    cout << "Docente: " << docente << "\tMateria: " << materia << endl;
}
int main()
{
    Alumno alu("Frank", 19, "Computación", "Pepe");
    alu.mostrarAlumno();
    return 0;
}