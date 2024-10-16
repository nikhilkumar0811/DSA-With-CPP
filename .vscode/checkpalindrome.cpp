#include <bits/stdc++.h>
using namespace std;
bool palincheck(char ch[], int n)
{
    int s = 0;
    int e = n - 1;

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
        return 1;
    }
}
int main()
{
    char ch[20];
    cout << "enter the name you have to check:" << endl;
    cin >> ch;
    int length = strlen(ch);

    if (palincheck(ch, length))
    {
        cout << "it is palindrome. " << endl;
    }
    else
    {
        cout << "it is not palindrome." << endl;
    }
    return 0;
}