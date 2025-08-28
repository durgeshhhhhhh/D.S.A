#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int low = 0;
    int high = str.length() - 1;

    while (low <= str.length() / 2)
    {
        char temp = str[low];
        str[low] = str[high];
        str[high] = temp;

        low++;
        high--;
    }

    string ans = "";

    for (int i = 0; i < str.size(); i++)
    {
        string word = "";
        while (i < str.length() && str[i] != ' ')
        {
            word += str[i];
            i++;
        }

        int j = 0;
        int k = word.length() - 1;

        while (j < k)
        {
            char temp = word[j];
            word[j] = word[k];
            word[k] = temp;

            j++;
            k--;
        }

        if (word.length() > 0)
        {
            ans += " " + word;
        }
    }

    string newString = ans.substr(1);
    cout << newString;

    return 0;
}