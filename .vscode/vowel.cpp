#include <iostream>
using namespace std;

int countVowels(char arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        char ch = arr[i];
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    // Initialize a char array
    char arr[] = "Hello World!";
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call function to count vowels
    int vowelCount = countVowels(arr, size);

    cout << "The number of vowels in the array is: " << vowelCount << endl;

    return 0;
}
