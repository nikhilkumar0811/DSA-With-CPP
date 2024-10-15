#include <bits/stdc++.h>
using namespace std;
int length(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "enter your name:";
    cin >> name;
    cout << "length of the name:" << length(name) << endl;
    return 0;
}