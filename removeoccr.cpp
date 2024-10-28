#include <bits/stdc++.h>
using namespace std;
string removeoccr(string S, string part)
{
    while (S.length() != 0 && S.find(part) < S.length())
    {
        S.erase(S.find(part), part.length());
    }
    return S;
}
int main()
{
    string S = "daabcbaabcbc";
    string part = "abc";
    string result = removeoccr(S, part);
    cout << "Result:" << result << endl;
    return 0;
}