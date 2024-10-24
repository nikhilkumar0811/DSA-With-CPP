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
    cout << "enter rthe the number";
    cin >> n;
    if (primecheck(n))
    {
        cout << n << "the number is prime";
    }
    else
    {
        cout << n << "the number is not prime";
    }
    return 0;
}