#include <bits/stdc++.h>
using namespace std;

#define n 20

class CustomQueue // Renamed class to avoid conflicts
{
    int *arr;
    int front;
    int back;

public:
    CustomQueue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    ~CustomQueue() // Destructor to free allocated memory
    {
        delete[] arr;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "No element in queue" << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        return (front == -1 || front > back);
    }
};

int main()
{
    CustomQueue q; // Using the corrected class name

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek() << endl; // Output: 1
    q.pop();

    cout << q.peek() << endl; // Output: 2
    q.pop();

    cout << q.peek() << endl; // Output: 3
    q.pop();

    cout << q.peek() << endl; // Output: 4
    q.pop();

    cout << (q.empty() ? "Queue is empty" : "Queue is not empty") << endl; // Output: Queue is empty

    return 0;
}
