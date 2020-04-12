#include<iostream>
using namespace std;
struct Persona{
	char nombre [50];
	int edad;
}persona, *punteroPersona = &persona;
void pedirDatos();
void mostrarDatos(Persona *);
int main(){
	pedirDatos();
	mostrarDatos(punteroPersona);
	return 0;
}
void pedirDatos(){
	cout<<"Ingrese su nombre: ";
	cin.getline(punteroPersona->nombre,50,'\n');
	cout<<"Ingrese su edad: ";
	cin>>punteroPersona->edad;

}
void mostrarDatos(Persona *persona){
	cout<<"Su nombre es: "<<persona->nombre<<endl;
	cout<<"Su edad es: "<<persona->edad<<endl;
}