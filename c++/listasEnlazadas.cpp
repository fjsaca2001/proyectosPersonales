#include <iostream>
#include <stdlib.h>
using namespace std;
// Estructura de un nodo
struct Nodo
{
    int dato;
    Nodo *sig;
};
// Prototipo de funciones
void insertar(Nodo *&, int);
void mostrar(Nodo *);
void buscar(Nodo *&, int);
void eliminar(Nodo *&, int);
void vaciar(Nodo *&, int &);
int main()
{
    int dato, op, exit;
    Nodo *lista = NULL;
    do
    {
        cout << "-----------------------------\n";
        cout << "|| 1. Insertar a lista     ||\n";
        cout << "|| 2. Mostrar lista        ||\n";
        cout << "|| 3. Buscar en lista      ||\n";
        cout << "|| 4. Eliminar en lista    ||\n";
        cout << "|| 5. Vaciar lista         ||\n";
        cout << "|| 6. Salir                ||\n";
        cout << "-----------------------------\n";
        cout << "Ingrese: ";
        cin >> op;
        switch (op)
        {
        case 1:
            // Llenar lista
            do
            {
                cout << "Dijite un numero: ";
                cin >> dato;
                insertar(lista, dato);
                cout << "¿Desea agregar otro valor?(si:1/no: 0): ";
                cin >> exit;
            } while (exit != 0);
            break;
        case 2:
            // Presentar lista
            cout << "\nPresentar datos.\n";
            mostrar(lista);
            break;
        case 3:
            // buscar en lista
            cout << "Ingrese un valor a buscar: ";
            cin >> dato;
            buscar(lista, dato);
            break;
        case 4:
            // Eliminar en lista
            cout << "Ingrese un valor a eliminar: ";
            cin >> dato;
            eliminar(lista, dato);
            break;
        case 5:
            // Vaciar lista
            while (lista != NULL)
            {
                vaciar(lista, dato);
                cout << dato << " Eliminado\n";
            }
            break;
        case 6:
            // Salida del programa
            cout << "Gracias :D\n";
            break;
        // Mensaje por defecto
        default:
            cout << "Verifique su ingreso....\n";
            break;
        }
    } while (op != 6);
    return 0;
}
void insertar(Nodo *&lista, int n)
{
    Nodo *nuevo = new Nodo();
    nuevo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;
    // Recorrer la lista y agregar de manera ordenada
    while ((aux1 != NULL) && (aux1->dato < n))
    {
        aux2 = aux1;
        aux1 = aux1->sig;
    }

    if (lista == aux1)
    {
        lista = nuevo;
    }
    else
    {
        aux2->sig = nuevo;
    }

    nuevo->sig = aux1;
    cout << "Elemento " << n << " agregado.\n";
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
void buscar(Nodo *&lista, int dato)
{
    Nodo *nuevo = new Nodo();
    // Almacenar la lista
    nuevo = lista;
    // Bandera
    bool b = false;
    // Recorrer la lista
    while ((nuevo != NULL) && (nuevo->dato <= dato))
    {
        // Si se encontro el dato asigne a bandera
        b = (nuevo->dato == dato) ? true : false;
        // Siguinte nodo
        nuevo = nuevo->sig;
    }
    // Presentar mensaje en caso de que exista o no
    b ? cout << "\nEl elemento " << dato << " si existe\n" : cout << "\nEl elemento " << dato << " no existe\n";
}
void eliminar(Nodo *&lista, int dato)
{
    // Preguntar si la lista tiene valores
    if (lista != NULL)
    {
        // Nodos auxiliares
        Nodo *aux;
        Nodo *anterior = NULL;
        // Almacenar la lista
        aux = lista;
        // Recorrer la lista y preguntar si se encontro el valor
        while ((aux != NULL) && (aux->dato != dato))
        {
            // Guardar el valor
            anterior = aux;
            // Paso al siguiente nodo
            aux = aux->sig;
        }
        // Si no existe el dato
        if (aux == NULL)
        {
            cout << "El elemento no existe.";
        }
        // Si el dato esta en el primer nodo
        else if (anterior == NULL)
        {
            // Paso al siguiente nodo
            lista = lista->sig;
            // Eliminar el nodo
            delete aux;
        }
        // Si el dato no esta en el primer nodo
        else
        {
            // Mover posicion en e nodo
            anterior->sig = aux->sig;
            // Eliminar el nodo
            delete aux;
        }
    }
    else
    // No existe valores en la lista
    {
        cout << "La lista esta vacia.\n";
    }
}
void vaciar(Nodo *&lista, int &dato)
{
    // Guardar la lista
    Nodo *aux = lista;
    // Guardar el dato
    dato = lista->dato;
    // Pasar al siguiente
    lista = lista->sig;
    // Eliminar el nodo
    delete aux;
}