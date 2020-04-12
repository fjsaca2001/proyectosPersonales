#include<iostream>
using namespace std;
int main(){
	int a[] = {4,3,2,5,1};
	int aux = 0;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			if (a[j] > a[j+1]){
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
			}
		}
		
	}
	cout<<"Orden ascendernte\n";
	for (int i = 0; i < 5; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nOrden descendente\n";
	for (int i = 4; i >= 0; i--){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
