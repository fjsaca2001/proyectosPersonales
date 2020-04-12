#include <iostream>
using namespace std;
void calcularPrimo(int x);
int main(){
	int num, *dirNum = &num;
	cout<<"Ingrese un valor: ";
	cin>>num;
	dirNum = &num;
	calcularPrimo(*dirNum);
	cout<<"\nDireccion de memoria: "<<dirNum;
	return 0;
}
void calcularPrimo(int x){
	int c = 0;
	if (x <= 0){
		cout<<"El numero no es primo";
	}else{
		for (int i = 1; i <= x ; i++){
			if (x % i == 0){
				c++;
			}
		}
	}
	if (c == 2)
	{
		cout<<"El numero es Primo";
	}else{
		cout<<"El numero no es primo";
	}
}
