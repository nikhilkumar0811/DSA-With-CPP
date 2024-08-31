#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;

    // Before swapping
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping without using a third variable
    a = a + b; // a now becomes 15
    b = a - b; // b becomes 5 (original value of a)
    a = a - b; // a becomes 10 (original value of b)

    // After swapping
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
