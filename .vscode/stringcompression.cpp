#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int write = 0, read = 0, n = chars.size();

    while (read < n)
    {
        char currentChar = chars[read];
        int count = 0;

        // Count the occurrences of the current character
        while (read < n && chars[read] == currentChar)
        {
            ++read;
            ++count;
        }

        // Write the character
        chars[write++] = currentChar;

        // Write the count if it's greater than 1
        if (count > 1)
        {
            string countStr = to_string(count);
            for (char c : countStr)
            {
                chars[write++] = c;
            }
        }
    }

    return write;
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newLength = compress(chars);

    cout << "Compressed length: " << newLength << endl;
    cout << "Compressed characters: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << chars[i];
    }
    cout << endl;

    return 0;
}
