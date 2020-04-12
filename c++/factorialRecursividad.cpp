#include<iostream>
using namespace std;
int fac(int x);
int main(){
	int n;
	cout<<"Ingrese un valor: ";
	cin>>n;
	cout<<"El factorial de "<<n<<" es: "<<fac(n);
	return 0;
}
int fac(int x){
	if (x == 0){
		return 1;
	}else{
		return x * fac(x - 1);
	}
}
