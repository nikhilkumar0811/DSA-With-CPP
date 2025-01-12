#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures)
{
    int n = temperatures.size();
    vector<int> result(n, 0); // Initialize the result array with 0s
    stack<int> st;            // Stack to store indices of temperatures

    // Traverse the temperatures array
    for (int i = 0; i < n; ++i)
    {
        // While the stack is not empty and the current temperature is greater than
        // the temperature at the index stored at the top of the stack
        while (!st.empty() && temperatures[i] > temperatures[st.top()])
        {
            int prevIndex = st.top();          // Get the index of the previous temperature
            st.pop();                          // Remove it from the stack
            result[prevIndex] = i - prevIndex; // Calculate the difference in days
        }
        st.push(i); // Push the current index onto the stack
    }
    return result;
}

int main()
{
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> result = dailyTemperatures(temperatures);

    cout << "Result: ";
    for (int days : result)
    {
        cout << days << " ";
    }
    cout << endl;
    return 0;
}
