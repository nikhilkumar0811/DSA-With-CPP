#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sqr = n * n;
    cout << "Enter the number: ";
    cin >> n;

    int s = 0;
    int e = n - 1; // Initialize e as n - 1 for a broader range

    bool found = false;
    while (s <= e)
    {
        int sum = s + e;
        if (sum == n)
        {
            cout << "MAGIC " << s << " + " << e << " = " << n << endl;
            found = true;
            break;
        }
        else if (sum < n)
        {
            s++;
        }
        else
        {
            e--;
        }
    }

    if (!found)
    {
        cout << "No Magic " << n << endl;
    }

    return 0;
}
