#include <iostream>
using namespace std;

long long coloredCells(int n)
{
    return 1LL * n * n + 1LL * (n - 1) * (n - 1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Total colored cells: " << coloredCells(n) << endl;
    return 0;
}
