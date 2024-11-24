#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % 2 == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    int n;
    cout << "enter the number you want to check prime or not:" << endl;
    cin >> n;
    if (isprime)
    {
        cout << "the given number is prime number" << endl;
    }
    else
    {
        cout << "the f=given number are not prime" << endl;
    }
    return 0;
}