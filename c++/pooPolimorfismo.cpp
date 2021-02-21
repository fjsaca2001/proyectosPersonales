#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    Person(string, int);
    virtual void show();
};

Person::Person(string name1, int age1)
{
    name = name1;
    age = age1;
}

void Person::show()
{
    cout << "Name: " << name << "\tAge: " << age << endl;
}

class Student : public Person
{
private:
    string matter, codStudent;
    void show();

public:
    Student(string, int, string, string);
};

Student::Student(string name1, int age1, string matter1, string codStudent1) : Person(name1, age1)
{
    matter = matter1;
    codStudent = codStudent1;
}

void Student::show()
{
    Person::show();
    cout << "Matter: " << matter << "\tCode Student: " << codStudent << endl;
}

class Teacher : public Person
{
private:
    string area;

public:
    Teacher(string, int, string);
    void show();
};

Teacher::Teacher(string name1, int age1, string area1) : Person(name1, age1)
{
    area = area1;
}

void Teacher::show()
{
    Person::show();
    cout << "Area: " << area << endl;
}
int main()
{
    Person *listStudent[3];
    Person *listTeacher[3];
    listStudent[0] = new Student("Frank", 19, "Software", "1150030631");
    listStudent[1] = new Student("Joel", 20, "Redes", "115003032");
    listStudent[2] = new Student("Luis", 22, "POO", "4515021545");

    listTeacher[0] = new Teacher("Juan", 35, "Informatica");
    listTeacher[1] = new Teacher("José", 40, "Sociales");
    listTeacher[2] = new Teacher("Pedro", 54, "Ciecias");
    cout << "List Students\n";
    for (int i = 0; i < 3; i++)
    {
        listStudent[i]->show();
        cout << endl;
    }
    cout << "List Teachers\n";
    for (int i = 0; i < 3; i++)
    {
        listTeacher[i]->show();
        cout << endl;
    }

    return 0;
}