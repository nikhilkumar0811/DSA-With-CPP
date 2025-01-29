#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

class Solution
{
public:
    string removeStars(string s)
    {
        stack<char> stk;

        for (char cur : s)
        {
            if (cur == '*')
            {
                if (!stk.empty())
                    stk.pop();
            }
            else
            {
                stk.push(cur);
            }
        }

        string ans = "";
        while (!stk.empty())
        {
            ans += stk.top();
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    Solution solution;
    string result = solution.removeStars(s);

    cout << "Result after removing stars: " << result << endl;
    return 0;
}
