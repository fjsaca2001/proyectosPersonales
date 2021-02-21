#include <iostream>
#include <stdlib.h>
using namespace std;
void pedirDatos();
void presentarValores(int);
int main()
{
    pedirDatos();
}
void pedirDatos()
{
    int n;
    cout << "Ingresar el numero limite de filas: ";
    cin >> n;
    presentarValores(n);
}
void presentarValores(int n)
{
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout << c << " ";
        }
        c++;
        cout << endl;
    }
}