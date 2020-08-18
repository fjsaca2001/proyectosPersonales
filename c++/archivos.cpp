#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
void menu();
void writeFile();
void readFile();
void addFile();
int main()
{
    menu();
    return 0;
}
void menu()
{
    int op;
    do
    {
        cout << "\n--------------------------------\n";
        cout << "||            Menú            ||\n";
        cout << "|| 1. Escribir un archivo     ||\n";
        cout << "|| 2. Leer un archivo         ||\n";
        cout << "|| 3. Añadir texto            ||\n";
        cout << "|| 4. Salir                   ||\n";
        cout << "--------------------------------\n";
        cout << "Ingrese: ";
        cin >> op;
        switch (op)
        {
        case 1:
            cin.ignore();
            writeFile();
            break;
        case 2:
            cin.ignore();
            readFile();
            break;
        case 3:
            cin.ignore();
            addFile();
            break;
        case 4:
            // Salida del programa
            cout << "Gracias :D\n";
            break;
        // Mensaje por defecto
        default:
            cout << "Verifique su ingreso....\n";
            break;
        }
    } while (op != 4);
}
void writeFile()
{
    string nameFile, text, band;
    ofstream file;
    cout << "Insert the file name with extension: ";
    getline(cin, nameFile);
    file.open(nameFile.c_str(), ios::out); //Abrir un archivo
    if (file.fail())
    {
        cout << "Error: File has not created ";
        exit(1);
    }
    do
    {
        cout << "Ingrese el texto del archivo: ";
        getline(cin, text);
        file << text << "\n";
        cout << "¿Desea ingresar más frases?(si-no): ";
        getline(cin, band);
    } while (band == "si");

    file.close(); //Cerrar el archivo
}
void readFile()
{
    string text, nameFile;
    ifstream file;
    cout << "Insert file name with extension: ";
    getline(cin, nameFile);
    file.open(nameFile, ios::in);
    if (file.fail()) // si el archivo fallo
    {
        cout << "File Not Found :( \n";
    }
    else
    {
        while (!file.eof()) // mientras el archivo tenga contenido
        {
            getline(file, text);
            cout << text;
        }
    }
    file.close(); // Cerrar el archivo
}
void addFile()
{
    ofstream file;
    int o;
    string nameFile, text;
    cout << "Insert file name with extension: ";
    getline(cin, nameFile);
    file.open(nameFile, ios::app); // abrir el archivo como añadir
    if (file.fail())
    {
        cout << "File Not Found :( \n";
    }
    else
    {
        do
        {
            cout << "Ingrese lo que desea agregar: ";
            getline(cin, text);
            file << text;
            cout << "¿Desea agregar más texto? (si-no): ";
            getline(cin, text);
        } while (text == "si");
    }
    file.close();
}