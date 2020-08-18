#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
struct Nodo
{
    int dato;
    Nodo *sig;
};
void insertar(Nodo *&, int);
void mostrar(Nodo *);
void mayorMenorLista(Nodo *);
int main()
{
    Nodo *lista = NULL;
    int op, dato;
    do
    {
        cout << "--------------------------------\n";
        cout << "|| 1. Llenar lista            ||\n";
        cout << "|| 2. Mostrar el mayor, menor ||\n";
        cout << "|| 3. Salir                   ||\n";
        cout << "--------------------------------\n";
        cout << "Ingrese: ";
        cin >> op;
        switch (op)
        {
        case 1:
            // Llenar lista
            int n;
            cout << "Dijite el tamaño de la lista: ";
            cin >> n;

            srand(time(NULL));
            for (int i = 0; i < n; i++)
            {
                dato = 0 + rand() % (101 - 0);
                insertar(lista, dato);
            }
            cout<<"Su lista es: ";
            mostrar(lista);
            break;
        case 2:
            // Presentar mayor
            mayorMenorLista(lista);
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
    return 0;
}
void insertar(Nodo *&lista, int dato)
{
    Nodo *nuevo = new Nodo();
    Nodo *aux;

    nuevo->dato = dato;
    nuevo->sig = NULL;
    if (lista == NULL)
    {
        lista = nuevo;
    }
    else
    {
        aux = lista;
        while (aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }

    cout << "Elemento " << dato << " agregado.\n";
}
void mostrar(Nodo *lista)
{
    Nodo *nuevo = new Nodo();
    // almacenar la lista
    nuevo = lista;
    // recorrer la lista
    while (nuevo != NULL)
    {
        //Presentar el dato
        cout << nuevo->dato << "  ";
        //Pasar al siguiente nodo
        nuevo = nuevo->sig;
    }
    cout << "\n";
}
void mayorMenorLista(Nodo *lista)
{
    int mayor = 0, menor = 9999;
    while (lista != NULL)
    {
        if ((lista->dato) > mayor)
        {
            mayor = lista->dato;
        }
        if ((lista->dato) < menor)
        {
            menor = lista->dato;
        }
        lista = lista->sig;
    }
    cout << "El mayor es: " << mayor;
    cout << "\nEl menor es: " << menor << endl;
}