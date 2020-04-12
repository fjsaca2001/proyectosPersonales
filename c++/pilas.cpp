#include<iostream>
#include<stdlib.h>
using namespace std;
// estructura para la pila
struct Pila{
	// valor que se ingresara
	int value;
	// puntero de tipo Pila
	Pila *nodo;
};
//prototipo funcion agregar datos a pila
void addPila(Pila *&,int);
//prototipo funcion quitar datos a pila
void quitPila(Pila *&,int &);
int main(){
	// valor inicial como nulo 
	Pila *pila = NULL;
	// dato que sera ingresado
	int dato;
	// requerimiento de datos
	cout<<"Ingrese: ";
	cin>>dato;
	addPila(pila,dato);

	cout<<"Ingrese: ";
	cin>>dato;
	addPila(pila,dato);
	// sacar datos
	cout<<"sacando elementos"<<endl;
	while(pila != NULL){// mientras no sea en final de la pila
		quitPila(pila,dato);
		if (pila != NULL){
			cout<<dato<<" , ";
		}else{
			cout<<dato<<".";
		}
	}
	return 0;
}
//funcion agregar datos a pila
void addPila(Pila *&pila,int value){
	Pila *newPila = new Pila();
	newPila->value = value;
	newPila->nodo = pila;
	pila = newPila;
	cout<<"Elemento "<<value<<" esta agredado."<<endl;
}
//funcion quitar datos de pila
void quitPila(Pila *&pila,int &n){
	Pila *aux = pila;
	n = aux->value;
	pila = aux->nodo;
	delete aux;
}