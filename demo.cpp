#include <bits/stdc++.h>
using namespace std;

class ST
{
    vector<int> ans;

public:
    void push(int val)
    {
        ans.push_back(val);
    }

    void pop()
    {
        ans.pop_back();
    }

    int top()
    {
        return ans[ans.size() - 1];
    }

    bool isEmpty()
    {
        return ans.size() == 0;
    }
};

int main()
{
    ST s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    return 0;
}