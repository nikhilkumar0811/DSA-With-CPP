#include <iostream>
#include <stack>
using namespace std;

class Queue
{
private:
    stack<int> s1; // Main stack
    stack<int> s2; // Auxiliary stack

public:
    // Function to enqueue an element into the queue
    void enqueue(int value)
    {
        s1.push(value);
    }

    // Function to dequeue an element from the queue
    int dequeue()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1; // Error value
        }

        // If s2 is empty, move all elements from s1 to s2
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        // Pop the top element from s2, which is the front of the queue
        int front = s2.top();
        s2.pop();
        return front;
    }

    // Function to check if the queue is empty
    bool isEmpty()
    {
        return s1.empty() && s2.empty();
    }

    // Function to get the front element of the queue without removing it
    int front()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty. No front element." << endl;
            return -1; // Error value
        }

        // If s2 is empty, move all elements from s1 to s2
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top(); // Front of the queue
    }
};

int main()
{
    Queue q;

    // Enqueue elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.front() << endl; // Output: 10

    // Dequeue elements
    cout << "Dequeued: " << q.dequeue() << endl; // Output: 10
    cout << "Dequeued: " << q.dequeue() << endl; // Output: 20

    // Enqueue another element
    q.enqueue(40);

    cout << "Dequeued: " << q.dequeue() << endl;    // Output: 30
    cout << "Front element: " << q.front() << endl; // Output: 40

    cout << "Dequeued: " << q.dequeue() << endl; // Output: 40

    // Try to dequeue from an empty queue
    cout << "Dequeued: " << q.dequeue() << endl; // Output: Queue is empty. Cannot dequeue.

    return 0;
}
