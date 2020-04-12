#include<iostream>
using namespace std;
int potencia(int b, int e);
int main(){
	int b, e;
	cout<<"Ingrese una base y un exponente: ";
	cin>>b>>e;
	cout<<"La potencia de "<<b<<" elevado a "<<e<<" es: "<<potencia(b,e);
	return 0;
}
int potencia(int b, int e){
	if (e == 0){
		return 1;
	}else{
		return b * potencia(b,e - 1);
	}
	
}
