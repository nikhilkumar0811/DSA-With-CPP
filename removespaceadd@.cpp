#include <bits/stdc++.h>
using namespace std;

string replacespaces(char s[], int length)
{
    string temp = "";
    for (int i = 0; i < length; i++)
    {
        if (s[i] == ' ')
        {
            temp += "@40";
        }
        else
        {
            temp += s[i];
        }
    }
    return temp;
}

int main()
{
    char s[] = "Hello World, OpenAI!";
    int length = sizeof(s) / sizeof(s[0]) - 1;

    string result = replacespaces(s, length);
    cout << "Result: " << result << endl;

    return 0;
}
