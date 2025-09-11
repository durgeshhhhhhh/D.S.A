#include <bits/stdc++.h>
using namespace std;

class ABC
{
public:
    ABC()
    {
        cout << "Constructor called \n";
    }

    ~ABC()
    {
        cout << "Destructor \n";
    }
};

int main()
{
    if (true)
    {
        static ABC A;
    }

    cout << "Main function ends here \n";

    return 0;
}