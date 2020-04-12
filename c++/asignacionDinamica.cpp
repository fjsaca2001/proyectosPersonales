#include<iostream>
#include<stdlib.h>
using namespace std;
void datos();
void presentar();
int n, *posN;
int main(){
	
	datos();
	presentar();
	delete[] posN;
	return 0;
}
void datos(){
	cout<<"Ingrese el valor total de calificaciones: ";
	cin>>n;
	posN = new int[n];
	for (int i = 0; i < n; i++){
		cout<<"Ingrese una nota: ";
		cin>>posN[i];
	}
	
}
void presentar(){
	for (int i = 0; i < n; i++)
	{
		cout<<posN[i]<<endl;
	}
}
