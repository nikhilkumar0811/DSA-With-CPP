#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Sorting Class
class Sorter
{
private:
    vector<int> arr; // Encapsulated data

public:
    // Constructor to initialize the array
    Sorter(const vector<int> &input)
    {
        arr = input;
    }

    // Bubble Sort Method
    void bubbleSort()
    {
        for (size_t i = 0; i < arr.size() - 1; i++)
        {
            for (size_t j = 0; j < arr.size() - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]); // Swap elements
                }
            }
        }
    }

    // Display the sorted array
    void display() const
    {
        for (int val : arr)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    // Return the sorted array
    vector<int> getArray() const
    {
        return arr;
    }
};

// Searching Class
class Searcher
{
public:
    // Linear Search Method
    int linearSearch(const vector<int> &arr, int key)
    {
        for (size_t i = 0; i < arr.size(); i++)
        {
            if (arr[i] == key)
            {
                return i; // Return the index if found
            }
        }
        return -1; // Return -1 if not found
    }
};

int main()
{
    // Input array
    vector<int> inputArray = {34, 7, 23, 32, 5, 62};

    // Create a Sorter object and sort the array
    Sorter sorter(inputArray);
    cout << "Original Array: ";
    sorter.display();

    sorter.bubbleSort();
    cout << "Sorted Array: ";
    sorter.display();

    // Create a Searcher object and perform a search
    Searcher searcher;
    int key = 23;
    int index = searcher.linearSearch(sorter.getArray(), key);

    if (index != -1)
    {
        cout << "Element " << key << " found at index " << index << endl;
    }
    else
    {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}
