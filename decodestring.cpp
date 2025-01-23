#include <iostream>
#include <string>
#include <stack>
using namespace std;

string decodeString(string s)
{
    stack<string> strStack; // To store strings
    stack<int> numStack;    // To store numbers
    string currentStr = ""; // To build the current decoded string
    int currentNum = 0;     // To parse the current number

    for (char ch : s)
    {
        if (isdigit(ch))
        {
            // Build the number (handles multiple digits)
            currentNum = currentNum * 10 + (ch - '0');
        }
        else if (ch == '[')
        {
            // Push the current string and number to their respective stacks
            strStack.push(currentStr);
            numStack.push(currentNum);
            // Reset for the new substring
            currentStr = "";
            currentNum = 0;
        }
        else if (ch == ']')
        {
            // Pop from stacks and build the decoded string
            string temp = currentStr;
            currentStr = strStack.top();
            strStack.pop();
            int repeat = numStack.top();
            numStack.pop();
            // Append the repeated substring
            while (repeat--)
            {
                currentStr += temp;
            }
        }
        else
        {
            // Append characters to the current string
            currentStr += ch;
        }
    }

    return currentStr;
}

// Example usage
int main()
{
    string s = "3[a2[c]]";
    cout << "Decoded string: " << decodeString(s) << endl; // Output: "accaccacc"
    return 0;
}
