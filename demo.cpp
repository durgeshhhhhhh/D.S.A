#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
};

class Teacher
{
public:
    string subject;
    double salary;
};

class TA : public Student,
           public Teacher
{
    // public:
    //     string researchArea;
};

int main()
{

    TA t1;

    t1.name = "Saumya shekhawat";
    t1.subject = "21";
    t1.roll = 234;
    t1.salary = 70000;

    cout << t1.name << endl;
    cout << t1.roll << endl;
    cout << t1.subject << endl;
    cout << t1.salary << endl;

    return 0;
}