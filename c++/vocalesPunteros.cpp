#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void pedirDatos();
void nroVocales(char *);
char cad[150];
int main(){
	
	pedirDatos();
	nroVocales(cad);
	return 0;
}
void pedirDatos(){
	cout<<"Ingrese una cadena de texto: ";
	cin.getline(cad,150,'\n');
	for (int i = 0; i < 150; i++){
		cad[i] = toupper(cad[i]);
	}
}
void nroVocales(char *cadena){
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	while(*cadena){
		switch(*cadena){
			case 'A': 
				a++;
				break;
			case 'E': 
				e++;
				break;
			case 'I': 
				i++;
				break;
			case 'O': 
				o++;
				break;
			case 'U': 
				u++;
				break;
		}
		cadena++;
	}
	cout<<"La cadena de texto contiene: \n"<<endl<<"a: "
	<<a<<"\ne: "<<e<<"\ni: "<<i<<"\no: "<<o<<"\nu: "<<u<<endl;
}