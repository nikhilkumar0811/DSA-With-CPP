#include <bits/stdc++.h>
using namespace std;
void colsum(int arr[3][4], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        int sum = 0;

        for (int i = 0; i < row; i++)
        {
            sum += arr[i][j];
        }
        cout << "print sum->" << sum << endl;
    }
}
int main()
{
    int arr[3][4];
    int row = 3, col = 4;
    cout << "enter the element of 3X4 matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    colsum(arr, row, col);
    return 0;
}