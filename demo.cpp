#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person()
    {
        cout << "I am Parent Constructor" << endl;
    }

    ~Person()
    {
        cout << "I am Parent Destructor" << endl;
    }
};

class Student : public Person
{
public:
    int roll;

    ~Student()
    {
        cout << "I am child destructor" << endl;
    }

    Student()
    {
        cout << "I am child Constructor" << endl;
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "roll: " << roll << endl;
    }
};

int main()
{

    Student s1;

    s1.name = "yogesh";
    s1.age = 12;
    s1.roll = 12390;

    s1.getInfo();

    return 0;
}