#include<iostream>
using namespace std;
int main(){
	
	int a[] = {5,1,3,2,4};
	int aux, pos;
	for (int i = 0; i < 5; i++){
		pos = i;
		for (int j = i; j < 5; j++){
			if (a[j] < a[pos]){
				pos = j;
			}
		}
		aux = a[i];
		a[i] = a[pos];
		a[pos] = aux;
	}
	cout<<"Orden\n";
	for (int i = 0; i < 5; i++){
		cout<<a[i];
	}
	
	return 0;
}
