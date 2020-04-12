#include<iostream>
#include<stdlib.h>
using namespace std;
void datos();
void suma(int **, int **, int,int);
void asignarDatos(int **,int,int);
void borrarEspacio(int **,int);
int **matrizA, filas, columnas;
int **matrizB;
int main(){
	datos();
	suma(matrizA, matrizB, filas,columnas);
	borrarEspacio(matrizA,filas);
	borrarEspacio(matrizB,filas);
	return 0;
}
void datos(){
	// matriz A
	cout<<"Suma de matrices: \n";
	cout<<"Ingrese el numero de filas: ";
	cin>>filas;
	cout<<"Ingrese el numero de columnas: ";
	cin>>columnas;
	cout<<"Valores de la matriz A: \n";
	matrizA = new int *[filas];
	for (int i = 0; i < filas; i++){
		matrizA[i] = new int[columnas];
	}
	asignarDatos(matrizA, filas, columnas);
	// matriz B
	cout<<"Valores de la matriz B: \n";
	matrizB = new int *[filas];
	for (int i = 0; i < filas; i++){
		matrizB[i] = new int[columnas];
	}
	asignarDatos(matrizB, filas, columnas);
}
void asignarDatos(int **matriz,int filas,int columnas){
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			cout<<"Ingrese el valor de la posicion ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>*(*(matriz+i)+j);
		}
	}
}
void suma(int ** matrizA, int ** matrizB,int filas,int columnas){
	int **matrizC;
	matrizC = new int *[filas];
	for (int i = 0; i < filas; i++){
		matrizC[i] = new int[columnas];
	}
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			*(*(matrizC+i)+j) = (*(*(matrizA+i)+j))+(*(*(matrizB+i)+j));
		}
	}
	cout<<"La matriz sumada es: \n";
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			cout<<*(*(matrizC+i)+j)<<" ";
		}
		cout<<"\n";
	}
	borrarEspacio(matrizC,filas);
}
void borrarEspacio(int **matriz,int filas){
	for (int i = 0; i < filas; i++)
	{
		delete[] matriz[i];
	}
	delete[] matriz;
	cout<<"El espacio se ah liberado"<<endl;
}