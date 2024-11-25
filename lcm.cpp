#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int a, b;
    cout << "enter the a and b" << endl;
    cin >> a >> b;
    int gcd__result = gcd(a, b);
    int lcm__result = lcm(a, b);

    cout << "The given number are" << a << "and" << b << endl;
    cout << "GCD of the numbers is:" << gcd__result << endl;
    cout << "LCM of the number is:" << lcm__result << endl;
    return 0;
}