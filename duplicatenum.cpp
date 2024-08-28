#include <iostream>
using namespace std;
int findduplicate(int nums[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ nums[i];
    }
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{
    int nums[] = {1, 2, 3, 3, 4, 5};
    int size = 6;
    int duplicate = findduplicate(nums, size);
    cout << "the duplicate number are" << duplicate << endl;
    return 0;
}