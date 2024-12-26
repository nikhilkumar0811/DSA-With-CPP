#include <bits/stdc++.h>
using namespace std;
string reversestring(vector<string> &str)
{
    for (int i = 0; i < str.size() / 2; i++)
    {
        swap(str[i], str[str.size() - i - 1]);
    }
}

int main()
{
    vector<string> str = {"h", "e", "l", "l", "o"};
    reversestring(str);
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }
    cout << endl;
    return 0;
}