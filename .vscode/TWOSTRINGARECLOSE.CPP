#include <bits/stdc++.h>
using namespace std;

bool closeStrings(string word1, string word2) {
    // If the strings have different lengths, they can't be close
    if (word1.size() != word2.size()) return false;

    // Frequency count of characters in both strings
    vector<int> freq1(26, 0), freq2(26, 0);

    // Check for unique characters in both strings
    unordered_set<char> set1, set2;

    for (char c : word1) {
        freq1[c - 'a']++;
        set1.insert(c);
    }

    for (char c : word2) {
        freq2[c - 'a']++;
        set2.insert(c);
    }

    // Both strings must have the same unique characters
    if (set1 != set2) return false;

    // The frequency counts after sorting must match
    sort(freq1.begin(), freq1.end());
    sort(freq2.begin(), freq2.end());

    return freq1 == freq2;
}

int main() {
    string word1 = "abc", word2 = "bca";
    if (closeStrings(word1, word2)) {
        cout << "The strings are close." << endl;
    } else {
        cout << "The strings are not close." << endl;
    }
    return 0;
}
