#include<iostream>
using namespace std;
/*int main(){
 * 
	int num[] = {1,2,3,4,5};
	int *dirNum;
	dirNum = num;
	for (int i = 0; i < 5; i++){
		//cout<<"Elemento del vector ["<<i<<"]: "<<*dirNum++<<endl;
		cout<<"Posición del vector ["<<i<<"]: "<<dirNum++<<endl;
	}
	
	return 0;
}
int main(){
	int a[] = {10,8,6,1,3,2,4,5,7,0};
	int *posNum;
	posNum = a;
	for (int i = 0; i < 10; i++){
		if (*posNum % 2 == 0){
			cout<<"El elemento de la posicion "<<i<<" es par"<<endl;
			cout<<"La posicion en memoria del elemento es: "<<posNum<<endl;
		}else{
			cout<<"El elemento de la posicion "<<i<<" es impar"<<endl;
			cout<<"La posicion en memoria del elemento es: "<<posNum<<endl;
		}
		posNum++;
	}
	
	return 0;
}*/
int main(){
	int a[] = {0,8,7,5,1,4,1,6,10,3};
	int  *posNum = a, aux = a[0];
	for (int i = 0; i < 10; i++){
		if(*posNum < aux){
			aux = *posNum;
		}
		posNum++;
	}
	cout<<"El menor es: "<<aux;
	return 0;
}
