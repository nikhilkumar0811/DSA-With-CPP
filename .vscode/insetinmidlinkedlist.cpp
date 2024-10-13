#include <iostream>
using namespace std;

// Definition of a singly linked list node
struct Node
{
    int data;
    Node *next;

    Node(int value)
    { // Constructor to initialize node
        data = value;
        next = nullptr;
    }
};

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (!head)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to find the middle of the list and insert a new node after the middle
void insertInMiddle(Node *&head, int value)
{
    if (!head)
        return;

    Node *slow = head, *fast = head;
    Node *prev = nullptr;

    // Use slow and fast pointers to find the middle of the list
    while (fast && fast->next)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // Insert the new node after the middle node
    Node *newNode = new Node(value);

    if (prev)
    {
        prev->next = newNode; // Insert new node after the previous middle node
        newNode->next = slow; // Link new node to the current middle
    }
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = nullptr;

    // Create a linked list: 1 -> 2 -> 3 -> 4 -> NULL
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);

    cout << "Original Linked List: ";
    printList(head);

    // Insert 99 in the middle of the linked list
    insertInMiddle(head, 99);

    cout << "After inserting 99 in the middle: ";
    printList(head);

    return 0;
}
