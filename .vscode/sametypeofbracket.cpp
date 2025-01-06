#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    unordered_map<char, char> matchingBrackets = {{')', '('}, {'}', '{'}, {']', '['}};

    for (char c : s)
    {
        // If it's a closing bracket
        if (matchingBrackets.count(c))
        {
            if (!st.empty() && st.top() == matchingBrackets[c])
            {
                st.pop(); // Valid match, remove the opening bracket
            }
            else
            {
                return false; // Invalid match
            }
        }
        else
        {
            st.push(c); // Push opening brackets onto the stack
        }
    }

    return st.empty(); // Valid if stack is empty
}

int main()
{
    string s = "()[]{}";
    if (isValid(s))
    {
        cout << "The string is valid." << endl;
    }
    else
    {
        cout << "The string is invalid." << endl;
    }
    return 0;
}
