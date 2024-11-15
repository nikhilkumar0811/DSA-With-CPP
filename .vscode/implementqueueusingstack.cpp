#include <iostream>
#include <stack>
using namespace std;

class QueueUsingStacks
{
private:
    stack<int> stack1, stack2;

public:
    // Enqueue operation
    void enqueue(int data)
    {
        stack1.push(data);
    }

    // Dequeue operation
    int dequeue()
    {
        if (stack1.empty() && stack2.empty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }

        if (stack2.empty())
        {
            while (!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }

        int topVal = stack2.top();
        stack2.pop();
        return topVal;
    }

    // Check if the queue is empty
    bool isEmpty()
    {
        return stack1.empty() && stack2.empty();
    }

    // Peek operation
    int peek()
    {
        if (stack1.empty() && stack2.empty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }

        if (stack2.empty())
        {
            while (!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }

        return stack2.top();
    }
};

int main()
{
    QueueUsingStacks q;

    // Enqueue some elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Peek: " << q.peek() << endl; // Output: 10

    cout << "Dequeue: " << q.dequeue() << endl; // Output: 10
    cout << "Dequeue: " << q.dequeue() << endl; // Output: 20

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl; // Output: No

    cout << "Dequeue: " << q.dequeue() << endl;                         // Output: 30
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl; // Output: Yes

    cout << "Dequeue: " << q.dequeue() << endl; // Output: Queue is empty!

    return 0;
}
