#include <iostream>
#include <stdlib.h>
using namespace std;
struct Nodo
{
    int dato;
    Nodo *izq;
    Nodo *der;
};
void menu();
Nodo *crearNodo(int);
void insertar(Nodo *&, int);
void mostrar(Nodo *, int);
Nodo *arbol = NULL;
int main()
{
    menu();
    return 0;
}
void menu()
{
    int op, dato, contador = 0;
    do
    {
        cout << "--------------------------------\n";
        cout << "||            Menú            ||\n";
        cout << "|| 1. Llenar arbol            ||\n";
        cout << "|| 2. Mostrar arbol           ||\n";
        cout << "|| 3. Salir                   ||\n";
        cout << "--------------------------------\n";
        cout << "Ingrese: ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Ingrese un valor: ";
            cin >> dato;
            insertar(arbol, dato);
            cout << "\n";
            break;
        case 2:
        cout<<"\nPresentando el arbol\n\n";
            mostrar(arbol, contador);
            cout<<"\n";
            break;
        case 3:
            // Salida del programa
            cout << "Gracias :D\n";
            break;
        // Mensaje por defecto
        default:
            cout << "Verifique su ingreso....\n";
            break;
        }
    } while (op != 3);
}
Nodo *crearNodo(int n)
{
    Nodo *nuevo = new Nodo();
    nuevo->dato = n;
    nuevo->der = nuevo->izq = NULL;
    return nuevo;
};
// Insertar elementos en el arbol
void insertar(Nodo *&arbol, int dato)
{
    if (arbol == NULL)
    {
        Nodo *nuevo = crearNodo(dato);
        arbol = nuevo;
    }
    else
    {
        int valorRaiz = arbol->dato;
        if (dato < valorRaiz)
        {
            insertar(arbol->izq, dato);
        }
        else
        {
            insertar(arbol->der, dato);
        }
    }
}
void mostrar(Nodo *arbol, int contador)
{
    if (arbol = NULL)
    {
        return;
    }
    else
    {
        mostrar(arbol->der, contador + 1);
        for (int i = 0; i < contador; i++)
        {
            cout << " - ";
        }
        cout << arbol->dato << endl;
        //mostrar(arbol->izq, contador + 1);
    }
}