#include <bits/stdc++.h>
using namespace std;

void printWave(int arr[][100], int nRows, int mCols)
{
    for (int col = 0; col < mCols; col++)
    {
        if (col % 2 == 0)
        {
            // Print top to bottom in even columns
            for (int row = 0; row < nRows; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            // Print bottom to top in odd columns
            for (int row = nRows - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main()
{
    int nRows, mCols;
    cout << "Enter number of rows and columns: ";
    cin >> nRows >> mCols;

    int arr[100][100];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Wave print of the array:" << endl;
    printWave(arr, nRows, mCols);

    return 0;
}
