#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;

    Student()
    {
        cout << "non parameterized\n";
    }

    Student(string name)
    {
        this->name = name;
        cout << name;
    }
};

int main()
{
    Student s1("Durgesh");

    return 0;
}