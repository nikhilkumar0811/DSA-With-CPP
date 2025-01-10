#include <bits/stdc++.h>
using namespace std;
class Mystack
{
public:
    int *arr;
    int top;
    int size;
    Mystack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "The stack is overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack is underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Mystack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    cout << st.peek() << endl;
    st.pop();
}