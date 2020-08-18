#include <iostream>
#include <stdlib.h>
using namespace std;
class Persona
{
    // atributos
private:
    int edad;
    string nombre;
    // metodos
public:
    //constructor
    Persona(int, string);
    void leer();
    void correr();
};
Persona::Persona(int edad1, string name){
    edad = edad1;
    nombre = name;
}
void Persona::leer(){
    cout<<"Metodo leer";
}
void Persona::correr(){
    cout<<"Metodo correr";
}
int main()
{
    Persona persona = Persona(19, "Frank");
    persona.correr();
    persona.leer();
    Persona p1(19,"Joel");
    p1.leer();
    p1.correr();
    return 0;
}