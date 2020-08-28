#include <iostream>
using namespace std;
class Employee
{
private:
    int age;
    string name;
    double salary;

public:
    Employee();
    void setEmployee(string, int, double);
    int getAge();
    string getName();
    double getSalary();
};
Employee::Employee()
{
}
void Employee::setEmployee(string name1, int age1, double salary1)
{
    name = name1;
    age = age1;
    salary = salary1;
}

int Employee::getAge()
{
    return age;
}
string Employee::getName()
{
    return name;
}
double Employee::getSalary()
{
    return salary;
}
int main()
{
    Employee emp;
    emp.setEmployee("Frank", 19, 200.50);
    cout<<"Nombre: "<<emp.getName()<<"\tAge: "<<emp.getAge()<<"\tSalary: "<<emp.getSalary()<<endl;
    return 0;
}