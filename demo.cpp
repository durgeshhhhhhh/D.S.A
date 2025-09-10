#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Teacher : public Person
{
public:
    string subject;
};

class Student : public Person
{
public:
    int roll;
};

int main()
{

    Teacher t1;

    t1.name = "Saumya shekhawat";
    t1.age = 21;
    t1.subject = "Maths";

    cout << t1.name << endl;
    cout << t1.age << endl;
    cout << t1.subject << endl;

    cout << endl
         << endl
         << endl;

    Student s1;

    s1.name = "Durgesh shekhawat";
    s1.age = 18;
    s1.roll = 36;

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.roll << endl;

    return 0;
}