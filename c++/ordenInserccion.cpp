#include<iostream>
using namespace std;
int main(){
	
	int a[] = {5,2,3,1,4};
	int pos, aux;
	for (int i = 0; i < 5; i++){
		pos = i;
		aux = a[i];
		while ((pos > 0) && (a[pos-1] > aux)){
			a[pos] = a[pos-1];
			pos--;
		}
		a[pos] = aux;
	}
	cout<<"Orden"<<endl;
	for (int i = 0; i < 5; i++){
		cout<<a[i];
	}
	
	return 0;
}
