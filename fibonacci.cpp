#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    int a = 0, b = 1;
    if (n >= 1)
    {
        cout << a << endl;
    }
    else if (n >= 2)
    {
        cout << b << endl;
    }
    for (int i = 3; i <= n; i++)
    {
        int next = a + b;
        cout << next << "";
        a = b;
        b = next;
    }
}
int main()
{
    int n;
    cout << "enter the number of terms:";
    cin >> n;
    fibonacci(n);
    return 0;
}