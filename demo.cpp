#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void getInfo()
    {
        cout << "Parents class \n";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "child class \n";
    }
};

int main()
{
    Child c1;
    Parent p1;

    c1.getInfo();
    
    p1.getInfo();

    return 0;
}