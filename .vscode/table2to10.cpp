#include <bits/stdc++.h>
using namespace std;
void table()
{
    for (int num = 2; num <= 10; num++)
    {
        cout << "table of:" << num << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << num << "x" << i << "=" << num * i << endl;
        }
    }
}
int main()
{
    table();
    return 0;
}