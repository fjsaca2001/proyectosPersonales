#include<iostream>
using namespace std;
int suma(int x);
int main(){
	int n;
	cout<<"Ingrese un numero: ";
	cin>>n;
	cout<<"La suma es: "<<suma(n);
	return 0;
}
int suma(int x){
	
	if (x == 1){
		return 1;
	}else{
		return x + suma(x - 1);
	}

}
