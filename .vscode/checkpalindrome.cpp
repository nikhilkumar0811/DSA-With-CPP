#include <bits/stdc++.h>
using namespace std;
bool palindrome(char ch[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (ch[s] != ch[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    char ch[20];
    int n;
    cout << "enter the name you want to check it is palidrome or not: " << endl;
    cin >> n;
    if (palindrome(ch, n))
    {
        cout << "the given name is palindrome" << endl;
    }
    else
    {
        cout << "the given name is not palindrome" << endl;
    }
    return 0;
}