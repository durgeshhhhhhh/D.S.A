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
};

class Student : public Person
{
public:
    int roll;

    // Student(string name, int age, int roll) : Person(name, age)
    // {
    //     this->roll = roll;
    // }

    // void getInfo()
    // {
    //     cout << "name: " << name << endl;
    //     cout << "age: " << age << endl;
    //     cout << "roll: " << roll << endl;
    // }
};

class Graduated : public Student
{
public:
    string researchArea;
};

int main()
{

    Graduated g1;

    g1.name = "Saumya";
    g1.age = 21;
    g1.roll = 234;
    g1.researchArea = "REACT";

    cout << g1.name << endl;
    cout << g1.age << endl;
    cout << g1.roll << endl;
    cout << g1.researchArea << endl;

    return 0;
}