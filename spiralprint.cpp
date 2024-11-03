#include <iostream>
using namespace std;

void spiralPrint(int arr[][100], int nRows, int mCols)
{
    int startRow = 0, endRow = nRows - 1;
    int startCol = 0, endCol = mCols - 1;

    while (startRow <= endRow && startCol <= endCol)
    {
        // Print the top row
        for (int col = startCol; col <= endCol; col++)
        {
            cout << arr[startRow][col] << " ";
        }
        startRow++;

        // Print the right column
        for (int row = startRow; row <= endRow; row++)
        {
            cout << arr[row][endCol] << " ";
        }
        endCol--;

        // Print the bottom row (if any)
        if (startRow <= endRow)
        {
            for (int col = endCol; col >= startCol; col--)
            {
                cout << arr[endRow][col] << " ";
            }
            endRow--;
        }

        // Print the left column (if any)
        if (startCol <= endCol)
        {
            for (int row = endRow; row >= startRow; row--)
            {
                cout << arr[row][startCol] << " ";
            }
            startCol++;
        }
    }
    cout << endl;
}

int main()
{
    int nRows, mCols;
    cout << "Enter the number of rows and columns: ";
    cin >> nRows >> mCols;

    int arr[100][100];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Spiral order of the matrix is: ";
    spiralPrint(arr, nRows, mCols);
    return 0;
}
