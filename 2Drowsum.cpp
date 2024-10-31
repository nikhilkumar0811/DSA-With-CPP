#include <iostream>
using namespace std;

void printsumrow(int arr[3][4], int row, int col)
{
    cout << "Row-wise sum -> ";
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    int arr[3][4];
    int row = 3, col = 4;

    // Input matrix elements
    cout << "Enter elements for a 3x4 matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Display the matrix
    cout << "Matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Call function to print row-wise sum
    printsumrow(arr, row, col);

    return 0;
}
