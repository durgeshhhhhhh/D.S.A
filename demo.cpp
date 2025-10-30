#include <bits/stdc++.h>
using namespace std;

string reverseWordsInString(string s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        swap(s[left++], s[right--]);
    }

    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";

        while (i < s.length() && s[i] != ' ')
        {
            word += s[i];
            i++;
        }

        int j = 0;
        int k = word.length() - 1;

        while (j < k)
        {
            swap(word[j], word[k]);
            j++;
            k--;
        }

        if (word.length() > 0)
        {
            ans += " " + word;
        }
    }

    return ans.substr(1);
}

int main()
{
    string s = "My name is durgesh";

    cout << reverseWordsInString(s) << endl;

    return 0;
}