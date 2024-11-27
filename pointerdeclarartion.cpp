#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *ptr = &num; // Pointer storing the address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer (ptr) value (address of num): " << ptr << endl;
    cout << "Value at pointer (dereferencing): " << *ptr << endl;

    return 0;
}
