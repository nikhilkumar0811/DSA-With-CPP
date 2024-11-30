#include <iostream>
using namespace std;

int main()
{
    int x = 10;    // Declare an integer variable
    int *ptr = &x; // Declare a pointer and assign the address of x to it

    // Display the value and address
    cout << "Value of x: " << x << endl;                        // 10
    cout << "Address of x: " << &x << endl;                     // Address of x
    cout << "Pointer ptr holds address: " << ptr << endl;       // Address of x
    cout << "Value at address ptr points to: " << *ptr << endl; // 10

    // Modifying the value using the pointer
    *ptr = 20;                               // Change the value at the address ptr points to
    cout << "New value of x: " << x << endl; // 20

    return 0;
}
