// Punteros: Es una variable que almacena la direccion de memoria de 
//otra variable

#include<iostream>
using namespace std;
int main(){
	int num, *dirNum; //variable de puntero
	num = 20;
	// asignacion de la direccion de memoria
	dirNum = &num;
	// *dirNum para imprimir lo que esta dentro de esa posición
	cout<<"Numero: "<<*dirNum<<endl;
	cout<<"Direccion de memoria: "<<dirNum<<endl;
	return 0;
}
