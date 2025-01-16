#include <bits/stdc++.h>
using namespace std;
stack<int> st, s2;
void push(int val)
{
    st.push(val);
    if (s2.empty() || val <= s2.top())
    {
        s2.push(val);
    }
}
void pop()
{
    if (st.top() == s2.top())
    {
        s2.pop();
    }
    st.pop();
}
int top()
{
    return st.top();
}
int getmin()
{
    return s2.top();
}

int main()
{
    push(18);
    push(19);
    push(29);
    push(15);
    push(16);

    cout << "minimum element is " << getmin() << endl;
    return 0;
}