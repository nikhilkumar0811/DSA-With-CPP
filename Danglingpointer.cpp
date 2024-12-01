#include <iostream>
using namespace std;

void danglingPointerExample()
{
    int *ptr = new int(10);
    cout << "Before deletion: " << *ptr << endl;

    delete ptr; // Memory deallocated
    // ptr is now a dangling pointer

    ptr = nullptr; // To avoid dangling, set it to nullptr
}

int main()
{
    danglingPointerExample();
    return 0;
}
