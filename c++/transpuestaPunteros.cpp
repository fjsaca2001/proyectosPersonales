#include<iostream>
#include<stdlib.h>
using namespace std;
void datos();
void asignarDatos(int **,int,int);
void borrarEspacio(int **,int);
void presentarDatos(int **,int,int);
void calcularTranspuesta(int **,int **, int, int);
int **matrizA, filas, columnas;
int **matrizB;
int main(){
	datos();
	calcularTranspuesta(matrizA,matrizB, filas, columnas);
	presentarDatos(matrizB,filas, columnas);
	borrarEspacio(matrizA,filas);
	borrarEspacio(matrizB,columnas);
	return 0;
}
void datos(){
	cout<<"Ingrese el numero de filas: ";
	cin>>filas;
	cout<<"Ingrese el numero de columnas: ";
	cin>>columnas;
	matrizA = new int *[filas];
	for (int i = 0; i < filas; i++){
		matrizA[i] = new int[columnas];
	}
	asignarDatos(matrizA, filas, columnas);
	matrizB = new int *[columnas];
	for (int i = 0; i < columnas; i++){
		matrizB[i] = new int[filas];
	}
}
void asignarDatos(int **matriz,int filas,int columnas){
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			cout<<"Ingrese el valor de la posicion ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>*(*(matriz+i)+j);
		}
	}
}
void borrarEspacio(int **matriz,int filas){
	for (int i = 0; i < filas; i++)
	{
		delete[] matriz[i];
	}
	delete[] matriz;
	cout<<"El espacio se ah liberado"<<endl;
}
void calcularTranspuesta(int **matrizA,int **matrizB, int filas, int columnas){

	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
				*(*(matrizB+j)+i) = *(*(matrizA+i)+j);
		}	
	}
	
}
void presentarDatos(int **matrizB, int filas,int columnas){
	for (int i = 0; i < columnas; i++){
		for (int j = 0; j < filas; j++){
			cout<<*(*(matrizB+i)+j)<<" ";
		}
		cout<<"\n";
	}
}