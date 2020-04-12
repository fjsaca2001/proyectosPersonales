#include<iostream>
#include<stdlib.h>
using namespace std;
// estructura creada para crear una pila
struct Pila{
	int valor;
	Pila *nodo;
};
void agregarPila(Pila *&, int);
void quitarPila(Pila *&, int &);
int main(){
	Pila *pila = NULL;
	int dato;
	string c;
	do
	{
		cout<<"Ingrese un dato para agregar a la pila: ";
		cin>>dato;
		agregarPila(pila, dato);
		cout<<"¿Desea ingresar otro dato?(s/n)";
		cin>>c;
	} while ((c == "s") || (c == "S"));

	cout<<"Presentando datos: \n";
	while(pila != NULL){
		quitarPila(pila,dato);
		if (pila != NULL){
			cout<<dato<<", ";
		}else{
			cout<<dato<<".";
		}
	}
	return 0;
}
void agregarPila(Pila *&pila, int valor){
	Pila *nuevo = new Pila();
	nuevo->valor = valor;
	nuevo->nodo = pila;
	pila = nuevo;
	cout<<"Elemento "<<valor<<" esta agredado."<<endl;
}
void quitarPila(Pila *&pila,int &v){
	Pila *aux = pila;
	v = aux->valor;
	pila = aux->nodo;
	delete aux;
}