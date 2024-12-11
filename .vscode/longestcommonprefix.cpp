#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &str)
{
    if (str.empty())
    {
        return "";
    }
    string prefix = str[0];

    for (int i = 0; i < str.size(); i++)
    {
        while (str[i].find(prefix) != 0)
        {
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty())
            {
                return "";
            }
        }
    }
    return prefix;
}
int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    string result = longestCommonPrefix(str);
    if (!result.empty())
    {
        cout << "LOngest common prefix" << result << endl;
    }
    else
    {
        cout << "NO common prefix found:" << endl;
    }
    return 0;
}
