#include<iostream>
using namespace std;
int escribeNumeros(int x, int y);
int main(){
	
	int i, f;
	cout<<"Ingrese la cantidad inicial: ";
	cin>>i;
	cout<<"Ingrese la cantidad final: ";
	cin>>f;
	cout<<escribeNumeros(i,f);
	return 0;
}
int escribeNumeros(int x, int y){
	if (x == y){
		return y;
		
	}else{
		cout<<x<<" ";
		return escribeNumeros(x + 1, y);
	}
}
