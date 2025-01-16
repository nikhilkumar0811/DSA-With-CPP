#include <bits/stdc++.h>
using namespace std;
bool isvalid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty() ||
                (c == '(' && st.top() != ')') ||
                (c == '{' && st.top() != '}') ||
                (c == '[' && st.top() != ']'))
            {
                return false;
            }
        }
        st.pop();
    }
    return st.empty();
}
int main()
{
    string s;
    cout << "enter the element" << endl;
    cin >> s;
    if (isvalid(s))
    {
        cout << "this is valid " << endl;
    }
    else
    {
        cout << "this is not valid" << endl;
    }
    return 0;
}