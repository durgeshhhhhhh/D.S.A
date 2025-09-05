#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void setsalary(double s)
    {
        salary = s;
    }

    double getsalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;

    t1.setsalary(25000);

    cout << t1.getsalary() << endl;

    return 0;
}