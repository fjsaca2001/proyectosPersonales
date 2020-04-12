#include<iostream>
using namespace std;
int main(){
	int num, *dirNum;
	cout<<"Ingrese un dijito: ";
	cin>>num;
	dirNum = &num;
	if (*dirNum % 2 == 0){
		cout<<"El numero es par";
	}else{
		cout<<"El numero es impar";
	}
	cout<<"\nLa posicion de memoria es: "<<dirNum;
	return 0;
}
