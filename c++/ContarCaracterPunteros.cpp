#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void datos();
int calcularVocales(char *);

char nombreU[30];

int main(){
	datos();
	cout<<"En su nombre existen: "<<endl;
	cout<<calcularVocales(nombreU)<<" Vocales";
	
	return 0;
}
void datos(){
	cout<<"Ingrese su nombre: ";
	cin.getline(nombreU,30,'\n');
	for (int i = 0; i < 30; i++){
		nombreU[i] = toupper(nombreU[i]);
	}
	
}
int calcularVocales(char *nombre){
	int v = 0;
	while (*nombre){
		switch (*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				v++;
				break;
		}
		nombre++;
	}
	return v;
}
