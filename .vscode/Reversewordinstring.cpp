#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    // Step 1: Trim leading and trailing spaces
    int left = 0, right = s.size() - 1;
    while (left <= right && s[left] == ' ')
        left++;
    while (right >= left && s[right] == ' ')
        right--;

    // Step 2: Split the words and store them in a vector
    vector<string> words;
    string word = "";
    for (int i = left; i <= right; i++)
    {
        if (s[i] != ' ')
        {
            word += s[i];
        }
        else if (!word.empty())
        {
            words.push_back(word);
            word = "";
        }
    }
    if (!word.empty())
        words.push_back(word);

    // Step 3: Reverse the words in the vector
    reverse(words.begin(), words.end());

    // Step 4: Join the words into a single string with a space separator
    string result = "";
    for (int i = 0; i < words.size(); i++)
    {
        result += words[i];
        if (i < words.size() - 1)
            result += " ";
    }

    return result;
}

int main()
{
    string s = "  hello world  ";
    cout << reverseWords(s) << endl; // Output: "world hello"

    s = "  a good   example  ";
    cout << reverseWords(s) << endl; // Output: "example good a"

    return 0;
}
