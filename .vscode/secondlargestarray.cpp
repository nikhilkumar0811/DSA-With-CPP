#include <iostream>
#include <climits> // for INT_MIN

int findSecondLargest(int arr[], int n)
{
    // Handle cases where there are fewer than two elements
    if (n < 2)
    {
        std::cout << "Array must have at least two elements" << std::endl;
        return -1; // Return -1 to indicate an error
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // Update first and second if a new largest is found
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        // Update second if a new second largest is found
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    // If second is still INT_MIN, it means there's no distinct second largest
    if (second == INT_MIN)
    {
        std::cout << "There is no second largest element" << std::endl;
        return -1; // Return -1 to indicate no second largest
    }

    return second;
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findSecondLargest(arr, n);

    if (result != -1)
    {
        std::cout << "The second largest element is " << result << std::endl;
    }

    return 0;
}
