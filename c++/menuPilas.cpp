#include<iostream>
#include<stdlib.h>
using namespace std;
struct Pila{
	char valor;
	Pila *siguiente;
};
void agregar(Pila *&, char);
void quitar(Pila *&, char &);
int main(){
	Pila *pila = NULL;
	char dato;
	int op;
	do
	{
		cout<<"\nMenu: "<<endl;
		cout<<"1. Insertar un caracter a la pila"<<endl;
		cout<<"2. Mostrar todos los elementos de la pila"<<endl;
		cout<<"3. salir "<<endl;
		cin>>op;
		switch(op){
			case 1: 
				cout<<"Ingrese una letra: ";
				cin>>dato;
				agregar(pila,dato);
			break;
			case 2:
				cout<<"Presentacion de datos: "; 
				while(pila != NULL){
					quitar(pila,dato);
					if(pila != NULL){
						cout<<dato<<"-";
					}else{
						cout<<dato<<".";
					}
				}
			break;
			case 3: 
				cout<<"Gracias.";
			break;
			default: 
			cout<<"Numero erroneo Ingrese nuevamente:\n";
		}
	} while ((op > 0 && op < 3) || (op > 3));
	return 0;
}
void agregar(Pila *&pila, char valor){
	Pila *newpila = new Pila();
	newpila->valor = valor;
	newpila->siguiente = pila;
	pila = newpila;
}
void quitar(Pila *&pila, char &valor){
	Pila *aux = pila;
	valor = aux->valor;
	pila = aux->siguiente;
	delete aux;
}