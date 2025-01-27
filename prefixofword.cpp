#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string reversePrefix(string word, char ch)
{
    // Find the index of the first occurrence of 'ch'
    int idx = word.find(ch);

    // If the character is not found, return the original word
    if (idx == string::npos)
    {
        return word;
    }

    // Reverse the prefix up to and including the first occurrence of 'ch'
    reverse(word.begin(), word.begin() + idx + 1);

    return word;
}

int main()
{
    // Test case 1
    string word1 = "abcdefd";
    char ch1 = 'd';
    cout << "Reversed Prefix: " << reversePrefix(word1, ch1) << endl;

    // Test case 2
    string word2 = "xyxz";
    char ch2 = 'z';
    cout << "Reversed Prefix: " << reversePrefix(word2, ch2) << endl;

    // Test case 3
    string word3 = "abcd";
    char ch3 = 'z';
    cout << "Reversed Prefix: " << reversePrefix(word3, ch3) << endl;

    return 0;
}
