#include <iostream>
#include <vector>
#include <algorithm>

// Function to rotate the array
void rotateArray(std::vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n; // Handle cases where k >= n

    // Reverse the entire array
    std::reverse(arr.begin(), arr.end());
    // Reverse the first k elements
    std::reverse(arr.begin(), arr.begin() + k);
    // Reverse the remaining elements
    std::reverse(arr.begin() + k, arr.end());
}

int main()
{
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3; // Number of steps to rotate

    std::cout << "Original array: ";
    for (int num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    rotateArray(arr, k);

    std::cout << "Rotated array: ";
    for (int num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
