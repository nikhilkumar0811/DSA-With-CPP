#include <string>
#include <stack>

class Solution
{
public:
    std::string clearDigits(const std::string &s)
    {
        std::stack<char> stk;
        for (char c : s)
        {
            if (isdigit(c))
            {
                if (!stk.empty())
                {
                    stk.pop(); // Remove the closest non-digit character to the left
                }
            }
            else
            {
                stk.push(c); // Push non-digit characters onto the stack
            }
        }
        // Construct the resulting string from the stack
        std::string result;
        while (!stk.empty())
        {
            result = stk.top() + result;
            stk.pop();
        }
        return result;
    }
};
