#include <iostream>
using namespace std;

#define MAX 1000 // Maximum size of the queue

class Queue
{
private:
    int arr[MAX];
    int front, rear, size;

public:
    Queue()
    {
        front = 0;
        rear = -1;
        size = 0;
    }

    // Enqueue operation
    void enqueue(int value)
    {
        if (size == MAX)
        {
            cout << "Queue Overflow! Cannot enqueue more elements.\n";
            return;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = value;
        size++;
        cout << value << " enqueued to queue.\n";
    }

    // Dequeue operation
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow! Cannot dequeue.\n";
            return;
        }
        cout << arr[front] << " dequeued from queue.\n";
        front = (front + 1) % MAX;
        size--;
    }

    // Get front element
    int getFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty.\n";
            return -1;
        }
        return arr[front];
    }

    // Get rear element
    int getRear()
    {
        if (isEmpty())
        {
            cout << "Queue is empty.\n";
            return -1;
        }
        return arr[rear];
    }

    // Check if queue is empty
    bool isEmpty()
    {
        return size == 0;
    }

    // Get size of queue
    int getSize()
    {
        return size;
    }
};

// Driver code
int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    q.dequeue();
    cout << "Front element after dequeue: " << q.getFront() << endl;
    cout << "Queue size: " << q.getSize() << endl;

    return 0;
}
