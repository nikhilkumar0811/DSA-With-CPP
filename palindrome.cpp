#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, digit, rev = 0;
    cout << "Enter the number you want to check for palindrome or not:" << endl;
    cin >> n;

    int num = n;           // Assign n to num to use it for manipulation
    int originalnum = num; // Store the original number for comparison

    while (num != 0)
    {
        digit = num % 10;         // Get the last digit
        rev = (rev * 10) + digit; // Build the reverse of the number
        num = num / 10;           // Remove the last digit from num
    }

    if (rev == originalnum)
    {
        cout << "The given number is a palindrome." << endl;
    }
    else
    {
        cout << "The given number is not a palindrome." << endl;
    }

    return 0;
}
