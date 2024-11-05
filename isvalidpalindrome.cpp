#include <bits/stdc++.h>
using namespace std;
bool isvalidpalindrome(string s)
{
    int left = 0, right = s.size() - 1;
    while (left < right)
    {
        if (!isalnum(s[left]))
        {
            left++;
        }
        if (!isalnum(s[right]))
        {
            right--;
        }
        else if (tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }
        else
        {
            left++;
            right--;
        }
    }
    return true;
}
int main()
{
    string s;
    cout << "enter the string you want to check it is valid or not:" << endl;
    cin >> s;
    if (isvalidpalindrome(s))
    {
        cout << "The palindrome is valid." << endl;
    }
    else
    {
        cout << "The palindrome is not valid." << endl;
    }
    return 0;
}