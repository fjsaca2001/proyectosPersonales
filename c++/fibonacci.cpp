#include<iostream>
using namespace std;
int main(){
	int a = 0,b = 1,c = 1,n;
	cout<<"Ingrese la cantidad de valores a presentar: ";
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cout<<c<<" ";
		c = a + b;
		a = b;
		b = c;
	}
	
}
