#include <iostream>
using namespace std;

void printTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    cout << endl; // Add an empty line between tables
}

int main()
{
    for (int num = 5; num <= 10; num++)
    {
        cout << "Multiplication Table of " << num << ":" << endl;
        printTable(num);
    }
    return 0;
}
