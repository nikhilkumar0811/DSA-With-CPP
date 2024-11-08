#include <bits/stdc++.h>
using namespace std;
bool primecheck(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "enter the num:" << endl;
    cin >> n;

    if (primecheck(n))
    {
        cout << "the num is prime number:";
    }
    else
    {
        cout << "the num is not prime number:";
    }
    return 0;
}