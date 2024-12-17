#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();

    // Traverse the digits from the end
    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits; // Return the result as no carry-over occurs
        }
        digits[i] = 0; // Set to 0 and continue to add carry to the next digit
    }

    // If all digits were 9, we need an extra digit at the beginning
    digits.insert(digits.begin(), 1);
    return digits;
}

int main()
{
    vector<int> digits = {9, 9, 9}; // Example input
    vector<int> result = plusOne(digits);

    cout << "Result: ";
    for (int digit : result)
    {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}
