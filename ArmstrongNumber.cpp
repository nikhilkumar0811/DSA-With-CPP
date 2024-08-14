#include <iostream>
#include <cmath>
using namespace std;
int isArm(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += pow(digit, 3);
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int totalsum = 0;
    for (int i = n; i <= m; i++)
    {
        int digit = isArm(i);
        if (digit == i)
        {
            totalsum += i;
        }
    }

    cout << totalsum;
    return 0;
}