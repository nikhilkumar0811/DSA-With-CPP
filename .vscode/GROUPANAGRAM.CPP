#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> anagramGroups;

    for (const string &str : strs)
    {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end()); // Sort the string
        anagramGroups[sortedStr].push_back(str);  // Group by the sorted string
    }

    vector<vector<string>> result;
    for (const auto &group : anagramGroups)
    {
        result.push_back(group.second); // Add each group to the result
    }

    return result;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> groupedAnagrams = groupAnagrams(strs);

    cout << "Grouped Anagrams:" << endl;
    for (const auto &group : groupedAnagrams)
    {
        for (const string &word : group)
        {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
