#include<iostream>
using namespace std;
int main(){
	int matriz[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout<<"Ingrese el valor ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matriz[i][j];
		}
	}
	cout<<"Matriz original\n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout<<"|"<<matriz[i][j];
		}
		cout<<"|"<<endl;
	}
	cout<<"Matriz transpuesta\n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout<<"|"<<matriz[j][i];
		}
		cout<<"|"<<endl;
	}
	return 0;
}
