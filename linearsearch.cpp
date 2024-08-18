#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {-5, -4, -3, -2, 0, 5, 4, 3, 2, 1};
    cout << "enter the element to be search" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is not present" << endl;
    }
    return 0;
}