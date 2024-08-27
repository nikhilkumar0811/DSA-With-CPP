#include <iostream>
using namespace std;
int main()
{
    int num, digit, rev = 0;
    cout << "enter the number you want to check palindrome or not" << endl;
    cin >> num;
    int originalnum = num;
    while (num != 0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    if (rev == originalnum)
    {
        cout << "the number is palindrome";
    }
    else
    {
        cout << "the number is not palindrome";
    }
    return 0;
}