#include <bits/stdc++.h>
using namespace std;
string reverseprefix(string word, char ch)
{
    int idx = word.find(ch);
    if (idx == -1)
        return word;
    reverse(word.begin(), word.begin() + idx + 1);
    return word;
}
int main()
{
    cout << reverseprefix("abcdefd", 'd') << endl;
    return 0;
}