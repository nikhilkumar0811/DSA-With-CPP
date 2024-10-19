#include <iostream>
#include <string>
using namespace std;

void countCharacters(const string &str)
{
    // Assuming we are dealing with ASCII characters, we need an array of size 256.
    int count[256] = {0};

    // Iterate over the string and count each character.
    for (char c : str)
    {
        count[(int)c]++;
    }

    // Output the frequency of each character.
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            cout << "Character '" << (char)i << "' appears " << count[i] << " times." << endl;
        }
    }
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    countCharacters(input);

    return 0;
}
