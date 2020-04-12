#include<iostream>
#include<stdlib.h>
using namespace std;
void data();
void busqueda(int x);
int n, *numbers;
int main(){
	int x;
	data();
	cout<<"Ingrese un numero a buscar: "<<endl;
	cin>>x;
	busqueda(x);
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
void busqueda(int x){
	bool b = false;
	for (int i = 0; i < n; i++){
		if (numbers[i] == x){
			b = true;
		}
	}
	if (b){
		cout<<"El numero "<<x<<" si existe";
	}else{
		cout<<"El numero "<<x<<" no existe";
	}
}
