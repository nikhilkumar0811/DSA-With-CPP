#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int countPalindromicSubsequence(string s)
{
    int n = s.size();
    vector<int> firstOccurrence(26, -1), lastOccurrence(26, -1);

    // Record the first and last occurrence of each character
    for (int i = 0; i < n; i++)
    {
        if (firstOccurrence[s[i] - 'a'] == -1)
        {
            firstOccurrence[s[i] - 'a'] = i;
        }
        lastOccurrence[s[i] - 'a'] = i;
    }

    unordered_set<string> uniquePalindromes;

    // For each character, find characters between its first and last occurrence
    for (int i = 0; i < 26; i++)
    {
        if (firstOccurrence[i] != -1 && lastOccurrence[i] != -1 &&
            firstOccurrence[i] < lastOccurrence[i])
        {
            unordered_set<char> seen;

            // Check all characters between the first and last occurrence
            for (int j = firstOccurrence[i] + 1; j < lastOccurrence[i]; j++)
            {
                seen.insert(s[j]);
            }

            // Add palindromic subsequences to the set
            for (char c : seen)
            {
                uniquePalindromes.insert(string(1, i + 'a') + c + string(1, i + 'a'));
            }
        }
    }

    return uniquePalindromes.size();
}

int main()
{
    string s = "aabca";
    cout << "Number of unique length-3 palindromic subsequences: " << countPalindromicSubsequence(s) << endl;
    return 0;
}
