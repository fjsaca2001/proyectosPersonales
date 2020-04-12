#include<iostream>
#include<stdlib.h>
using namespace std;
void data();
void orderArr();
void presentar();
int n, *numbers;
int main(){
	data();
	orderArr();
	presentar();
	delete[] numbers;
	return 0;
}
void data(){
	cout<<"Ingrese el tamaño de la lista: ";
	cin>>n;
	numbers = new int[n];
	for (int i = 0; i < n; i++){
		cout<<"Ingrese el valor #"<<i+1<<endl;
		cin>>numbers[i]; 
	}
}
void orderArr(){
	int aux;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n-1; j++){
			if (numbers[j] > numbers[j+1]){
				aux = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = aux;
			}
		}
	}
}
void presentar(){
	cout<<"Arreglo ordenado\n";
	for (int i = 0; i < n; i++){
		cout<<numbers[i]<<" ";
	}
}
