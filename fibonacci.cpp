#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n)
{
    int a = 0, b = 1; // Fibonacci starts with 0 and 1

    if (n >= 1)
    {
        cout << a << " "; // Print the first term
    }
    if (n >= 2)
    {
        cout << b << " "; // Print the second term
    }

    // Print the next terms of the Fibonacci sequence
    for (int i = 3; i <= n; i++)
    {
        int next = a + b;    // Calculate the next term
        cout << next << " "; // Print the next term
        a = b;               // Update a and b for the next iteration
        b = next;
    }
}

int main()
{
    int n;

    // Input the number of Fibonacci terms to print
    cout << "Enter the number of terms: ";
    cin >> n;

    // Print the Fibonacci sequence
    fibonacci(n);

    return 0;
}
