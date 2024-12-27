#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        int left = 0, right = s.size() - 1;
        string vowels = "aeiouAEIOU"; // Define all possible vowels

        while (left < right)
        {
            // Move the left pointer until a vowel is found
            while (left < right && vowels.find(s[left]) == string::npos)
            {
                left++;
            }
            // Move the right pointer until a vowel is found
            while (left < right && vowels.find(s[right]) == string::npos)
            {
                right--;
            }
            // Swap the vowels
            if (left < right)
            {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};

int main()
{
    Solution solution;
    string input = "hello";
    string result = solution.reverseVowels(input);
    cout << "Reversed vowels: " << result << endl; // Output: "holle"
    return 0;
}
