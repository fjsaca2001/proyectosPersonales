#include<iostream>
using namespace std;
struct Student{
	char name[50];
	int age;
	double average;
}students[3], *pointS = students;
void pedirDatos();
void bestStudent(Student *);
int main(){
	pedirDatos();
	bestStudent(pointS);

	return 0;
}
void pedirDatos(){

	for (int i = 0; i < 3; ++i){
		cout<<"Student "<<i+1<<endl;
		cout<<"Enter name: ";
		cin.getline((pointS+i)->name, 50,'\n');
		cout<<"Enter age: ";
		cin>>(pointS+i)->age;
		cout<<"Enter average: ";
		cin>>(pointS+i)->average;
		cin.ignore();// limpiar buffer
	}
}
void bestStudent(Student *student){
	int aux, c;
	aux = 0.0;
	for (int i = 0; i < 3; ++i){
		if ((student+i)->average > aux){
			aux = (student+i)->average;
			c = i;
		}
	}
	cout<<"The best student is: "<<(student+c)->name<<endl;
	cout<<"Average: "<<(student+c)->average<<endl;
}