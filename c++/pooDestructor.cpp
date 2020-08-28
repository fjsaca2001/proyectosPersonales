#include <iostream>
#include <stdlib.h>
using namespace std;
class Pet
{
private:
    string name;
    int age;

public:
    Pet(string, int);
    ~Pet(); //Destructor
    void infPet();
};

Pet::Pet(string name1, int age1)
{
    age = age1;
    name = name1;
}

Pet::~Pet()
{
}
void Pet::infPet()
{
    cout << "Name: " << name << "\tEdad: " << age;
}
int main()
{
    Pet pet1("José", 5);
    pet1.infPet();
    pet1.~Pet(); // Destructor
    return 0;
}