#include <iostream>
#include <stdlib.h>
using namespace std;
class Fecha
{
private:
    int dia, mes, anio;

public:
    Fecha(int, int, int);
    Fecha(long);
    void mostrarFecha();
};

Fecha::Fecha(int dia1, int mes1, int anio1)
{
    dia = dia1;
    mes = mes1;
    anio = anio1;
}
Fecha::Fecha(long fecha)
{
    anio = int(fecha / 10000);
    mes = int((fecha - anio * 10000) / 100);
    dia = int((fecha - anio * 10000) - mes * 100);
}
void Fecha::mostrarFecha()
{
    cout << "\nLa fecha es: " << dia << "/" << mes << "/" << anio;
}

int main()
{
    Fecha fecha(20, 8, 2020);
    fecha.mostrarFecha();
    Fecha fecha1(20200820);
    fecha1.mostrarFecha();
    return 0;
}