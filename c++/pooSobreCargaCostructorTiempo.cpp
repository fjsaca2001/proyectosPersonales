#include <iostream>
#include <stdlib.h>
using namespace std;
class Tiempo
{
private:
    int horas, minutos, segundos;

public:
    Tiempo(int, int, int);
    Tiempo(long);
    void mostrarHora();
};

Tiempo::Tiempo(int horas1, int minutos1, int segundos1)
{
    horas = horas1;
    minutos = minutos1;
    segundos = segundos1;
}

Tiempo::Tiempo(long hora)
{
    horas = int(hora / 3600);
    hora %= 3600;
    minutos = int(hora / 60);
    segundos = int (hora % 60);
}
void Tiempo::mostrarHora()
{
    cout << "\nla hora es: " << horas << "-" << minutos << "-" << segundos;
}
int main()
{
    Tiempo t(22, 21, 22);
    t.mostrarHora();
    Tiempo s(80482);
    s.mostrarHora();
    return 0;
}