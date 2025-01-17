#include <bits/stdc++.h>
using namespace std;
bool backspacecompare(string s, string t)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '#' && st.empty())
            continue;
        else if (c == '#')
            st.pop();
        else
            st.push(c);
    }
    s = "";
    while (!st.empty())
    {
        s += st.top();
        st.pop();
    }
    for (char c : t)
    {
        if (c == '#' && st.empty())
            continue;
        else if (c == '#')
            st.pop();
        else
            st.push(c);
    }
    s = "";
    while (!st.empty())
    {
        s += st.top();
        st.pop();
    }
    return s == t;
}
int main()
{
    string s, t;
    cout << "enter the string for s:" << endl;
    cin >> s;
    cout << "enter the string for the t:" << endl;
    cin >> t;
    if (backspacecompare(s, t))
    {
        cout << "the both are equal:" << endl;
    }
    else
    {
        cout << "the both are not equal:" << endl;
    }
    return 0;
}