#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // Person(string name, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    // }

    Person() {}
};

class Student : public Person
{
public:
    int rollNo;

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "roll no: : " << rollNo << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Yogesh";
    s1.age = 21;
    s1.rollNo = 1234;

    s1.getInfo();

    return 0;
}