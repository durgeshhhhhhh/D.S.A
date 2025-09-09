#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    long long salary;

public:
    string name;
    string dept;
    string subject;

    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    Teacher(Teacher &orgObj)
    {
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    void getInfo()
    {
        cout << "Name : " << name << endl
             << "Department : " << dept << endl
             << "Subject : " << subject << endl
             << "salary : " << salary;
    }

    void setsalary(long long s)
    {
        salary = s;
    }

    long long getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1("Durgesh Shekhawat", "SWE-III", "Backend Developer", 8500000);

    cout << t1.getSalary() << endl
         << endl;

    t1.setsalary(9000000);

    t1.getInfo();

    cout << endl;
    cout << endl;

    Teacher t2(t1); // custom constructor - Invoked
    t2.getInfo();

    return 0;
}