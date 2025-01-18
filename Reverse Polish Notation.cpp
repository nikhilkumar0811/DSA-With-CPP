#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int evalRPN(vector<string> &tokens)
{
    stack<int> st;

    for (const string &token : tokens)
    {
        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            // Pop the top two elements for operation
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();

            if (token == "+")
                st.push(a + b);
            else if (token == "-")
                st.push(a - b);
            else if (token == "*")
                st.push(a * b);
            else if (token == "/")
                st.push(a / b);
        }
        else
        {
            // Push the operand onto the stack
            st.push(stoi(token));
        }
    }

    return st.top();
}

int main()
{
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << "Result: " << evalRPN(tokens) << endl;

    // Example 2
    tokens = {"4", "13", "5", "/", "+"};
    cout << "Result: " << evalRPN(tokens) << endl;

    // Example 3
    tokens = {"10", "6", "9", "3", "/", "+", "11", "*", "/", "17", "+"};
    cout << "Result: " << evalRPN(tokens) << endl;

    return 0;
}
