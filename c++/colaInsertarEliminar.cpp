#include<iostream>
#include<stdlib.h>

using namespace std;
struct Nodo {
    int dato;
    Nodo *sig;
};
void insertar(Nodo *&, Nodo *&, int);
void eliminar(Nodo *&, Nodo *&, int &);
bool cola_vacia(Nodo *&);
int main() {
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato;
    cout<<"Ingrese un dato: ";
    cin>>dato;
    insertar(frente, fin, dato);
    cout<<"\nIngrese un dato: ";
    cin>>dato;
    insertar(frente, fin, dato);
    cout<<"\nIngrese un dato: ";
    cin>>dato;
    insertar(frente, fin, dato);
    cout<<"\nEliminando datos: \n";
    while (frente != NULL) {
        eliminar(frente, fin, dato);
        if (frente != NULL)
        {
            cout<<dato<<", ";
        }
        else
        {
            cout<<dato<<".";
        }
    }

    return 0;
}
void insertar(Nodo *&frente, Nodo *&final, int n) {
    Nodo *nuevo = new Nodo();
    nuevo->dato = n;
    nuevo->sig = NULL;

    if (cola_vacia(frente)) {
        frente = nuevo;
    }
    else
    {
        final->sig = nuevo;
    }
    final = nuevo;
    cout<<"Elemento "<<n<<" .Insertado";
}
void eliminar(Nodo *&frente, Nodo *&fin, int &n) {
    n = frente->dato;
    Nodo *aux = frente;
    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    }
    else {
        frente = frente->sig;
    }
    delete aux;
}
bool cola_vacia(Nodo *&frente) {
    return (frente == NULL)?  true: false;
}
