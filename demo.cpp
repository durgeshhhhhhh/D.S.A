#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void getInfo()
    {
        cout << "Parents class \n";
    }

    virtual void hello()
    {
        cout << "Hello from parent \n";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "child class \n";
    }

    void hello()
    {
        cout << "Hello from child \n";
    }
};

int main()
{
    Parent *ptr;
    Child c1;

    ptr = &c1;

    ptr->hello();

    ptr->getInfo();

    return 0;
}