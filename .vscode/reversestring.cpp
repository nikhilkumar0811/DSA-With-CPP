#include <iostream>
#include <string>
using namespace std;

string reverseInPairs(const string &str)
{
    string result = str;

    // Loop through the string, swapping characters in pairs
    for (size_t i = 0; i < str.length(); i += 2)
    {
        // Check if there is a valid pair to swap
        if (i + 1 < str.length())
        {
            swap(result[i], result[i + 1]);
        }
    }

    return result;
}

int main()
{
    string input = "abcdef";
    string reversed = reverseInPairs(input);
    cout << "Reversed in pairs: " << reversed << endl; // Output: "badcfe"

    return 0;
}
