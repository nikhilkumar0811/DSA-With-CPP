#include <bits/stdc++.h>
using namespace std;
string adjduplicate(string s)
{
    string result = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (!result.empty() && result.back() == s[i])
        {
            result.pop_back();
        }
        else
        {
            result += s[i];
        }
    }
    return result;
}
int main()
{
    string s = "abbaca";
    cout << adjduplicate(s);
    return 0;
}