#include <bits/stdc++.h>
using namespace std;
string longestcommonprefix(vector<string> &v)
{
    string ans = "";
    if (v.empty())
    {
        return ans;
    }
    sort(v.begin(), v.end());
    int n = v.size();
    string first = v[0], last = v[n - 1];

    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        if (first[i] == last[i])
        {
            ans += first[i];
        }
        else
        {
            break;
        }
    }

    return ans;
}
int main()
{
    vector<string> v = {"flower", "flight", "flow"};
    string result = longestcommonprefix(v);
    if (result.empty())
    {
        cout << "there is no longestcommon prefix" << endl;
    }
    else
    {
        cout << "this is the longestcommon prefix:" << " " << result << endl;
    }
    return 0;
}