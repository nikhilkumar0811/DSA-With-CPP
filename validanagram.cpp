#include <bits/stdc++.h>
using namespace std;
bool isvalidanagram(string s, string t)
{
    unordered_map<char, int> m1, m2;
    if (s.size() != t.size())
    {
        return false;
    }
    for (int i = 0; i < s.size(); i++)
    {
        m1[s[i]]++;
        m2[t[i]]++;
    }
    if (m1 == m2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s, t;
    cout << "enter the string s:";
    cin >> s;
    cout << "enter the string t:";
    cin >> t;
    if (isvalidanagram(s, t))
    {
        cout << "The string are anagram." << endl;
    }
    else
    {
        cout << "The string are not anagram." << endl;
    }
    return 0;
}

// bool isvalidanagram(string s, string t)
// {
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());

//     if (s == t)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
