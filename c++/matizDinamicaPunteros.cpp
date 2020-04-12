#include<iostream>
#include<stdlib.h>
using namespace std;
void datos();
void mostrar(int **, int, int);
int **punteroMatiz, fila,colum;
int main(){
	datos();
	mostrar(punteroMatiz,fila,colum);
	for (int i = 0; i < fila; i++)
	{
		delete[] punteroMatiz[i];
	}
	delete[] punteroMatiz;
	return 0;
}

void datos(){

	cout<<"Ingrese el numero de filas y columnas: ";
	cin>>fila>>colum;
	punteroMatiz = new int*[fila]; // reservo memoria para las filas
	for (int i = 0; i < fila; ++i){

		punteroMatiz[i] = new int[colum];// reservo memoria para las filas
	
	}

	cout<<"\nIngreso de datos: \n";
	for (int i = 0; i < fila; i++){
		for (int j = 0; j < colum; j++)
		{
			cout<<"Ingres el valor: ";
			cin>>*(*(punteroMatiz+i)+j);
		}
	}

}

void mostrar(int **punteroMatiz, int fila, int colum){

	for (int i = 0; i < fila; i++){
		for (int j = 0; j < colum; j++){
			cout<<*(*(punteroMatiz+i)+j)<<" ";
		}
		cout<<"\n";
	}
}