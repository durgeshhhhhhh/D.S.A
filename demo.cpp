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

    Teacher()
    {
        dept = "Computer Science";
    }

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
    cout << t1.dept << endl;

    return 0;
}