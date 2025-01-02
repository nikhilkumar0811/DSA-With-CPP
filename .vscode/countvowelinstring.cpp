#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Helper function to check if a character is a vowel
bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

// Function to calculate vowel strings and process queries
vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
{
    int n = words.size();
    vector<int> prefixSum(n + 1, 0); // Prefix sum array for cumulative counts

    // Step 1: Build prefix sum
    for (int i = 0; i < n; ++i)
    {
        bool startsWithVowel = isVowel(words[i][0]);
        bool endsWithVowel = isVowel(words[i].back());
        prefixSum[i + 1] = prefixSum[i] + (startsWithVowel && endsWithVowel ? 1 : 0);
    }

    // Step 2: Process queries
    vector<int> result;
    for (const auto &query : queries)
    {
        int l = query[0], r = query[1];
        result.push_back(prefixSum[r + 1] - prefixSum[l]);
    }

    return result;
}

// Driver code for testing
int main()
{
    vector<string> words = {"apple", "orange", "banana", "egg"};
    vector<vector<int>> queries = {{0, 1}, {1, 3}, {0, 3}};

    vector<int> result = vowelStrings(words, queries);

    // Print the result
    for (int count : result)
    {
        cout << count << " ";
    }
    return 0;
}
