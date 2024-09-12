#include <iostream>
using namespace std;
int main()
{
    int sum, n;
    sum = 0;
    cout << "enter the n terms" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        sum = sum + i;
    }
    cout << "the sum of n terms" << sum << endl;
}
