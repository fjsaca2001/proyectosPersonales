#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
class Rectangulo
{
    // atributos
private:
    double largo, ancho;
    // metodos
public:
    //constructor
    Rectangulo(double, double);
    void perimetro();
    void area();
};
Rectangulo::Rectangulo(double l, double a)
{
    largo = l;
    ancho = a;
}
void Rectangulo::perimetro()
{
    double peri;
    peri = pow(largo, 2) + pow(ancho, 2);
    cout << "\nEl perimetro es -> " << peri << endl;
}
void Rectangulo::area()
{
    double area;
    area = largo * ancho;
    cout << "\nEl area es -> " << area << endl;
}
int main()
{
    double largo, ancho;
    cout << "Ingrese el largo del rectangulo: ";
    cin >> largo;
    cout << "Ingrese el ancho del rectangulo: ";
    cin >> ancho;
    Rectangulo rectangulo = Rectangulo(largo, ancho);
    rectangulo.area();
    rectangulo.perimetro();
    return 0;
}