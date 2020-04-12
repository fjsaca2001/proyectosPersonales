#include<iostream>
#include<stdlib.h>
using namespace std;
void data();
int maxNumber();
int n, *numbers;
int main(){
	data();
	cout<<"El maximo es: "<<maxNumber();
	delete[] numbers;
	return 0;
}
void data(){
	cout<<"Ingrese el tamaño de la lista: ";
	cin>>n;
	numbers = new int[n];
	for (int i = 0; i < n; i++){
		cout<<"Ingrese el valor #"<<i+1<<endl;
		cin>>numbers[i]; 
	}
}
int maxNumber(){
	int max;
	max = numbers[0];
	for (int i = 0; i < n; i++){
		if (max < numbers[i]){
			max = numbers[i];
		}
	}
	return max;
}
