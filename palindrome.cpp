#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, digit, rev = 0;
    cout << "Enter the number you want to check" << endl;
    cin >> n;
    int num = n;
    int originalnum = num;
    while (n != 0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    if (rev == originalnum)
    {
        cout << "the num is palindrome" << endl;
    }
    else
    {
        cout << "the num is not palindrome" << endl;
    }
    return 0;
}