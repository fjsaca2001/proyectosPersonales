#include<iostream>
#include<stdlib.h>
using namespace std;
struct Nodo
{
    char dato;
    Nodo *sig;
};
void menu();
void insertar(Nodo *&, Nodo *&, char);
void mostrar(Nodo *&, Nodo *&, char &);
bool cola_vacia(Nodo *&);
int main() {
    menu();
    return 0;
}
void menu() {
    int op;
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    char dato;
    do {
        cout<<"-----------------------------\n";
        cout<<"|| 1. Insertar un caracter ||\n";
        cout<<"|| 2. Mostrar elementos    ||\n";
        cout<<"|| 3. Salir                ||\n";
        cout<<"-----------------------------\n";
        cout<<"Ingrese: ";
        cin>> op;
        switch (op)
        {
        case 1:
            // Insertar un dato
            cout<<"\nIngrese un dato: ";
            cin>>dato;
            insertar(frente, fin, dato);
            break;
        case 2:
            // Mostrar datos
            cout<<"\nPresentando los datos.\n";
            while (frente != NULL) {
                mostrar(frente, fin, dato);
                if (frente != NULL)
                {
                    cout<<dato<<", ";
                }
                else
                {
                    cout<<dato<<".\n";
                }
            }
            break;
        case 3:
            cout<<"Gracias :D \n";
            break;
        default:
            cout<<"Error al ingresar. Verifique su ingreso";
        }
    } while (op != 3);
}
void insertar(Nodo *&frente, Nodo *&fin, char n) {
    Nodo *nuevo = new Nodo();
    nuevo->dato = n;
    nuevo->sig = NULL;

    if (cola_vacia(frente)) {
        frente = nuevo;
    }
    else
    {
        fin->sig = nuevo;
    }
    fin = nuevo;
    cout<<"Elemento "<<n<<" insertado\n";
}
void mostrar(Nodo *&frente, Nodo *&fin, char &n) {
    n = frente->dato;
    Nodo *aux = frente;
    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    }
    else {
        frente = frente->sig;
    }
}
bool cola_vacia(Nodo *&frente) {
    return (frente == NULL)? true: false;
}