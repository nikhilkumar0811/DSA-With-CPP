#include <iostream>
#include <unordered_map>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

// Linked List with Hashmap for Quick Access
class LinkedList
{
public:
    Node *head;
    unordered_map<int, Node *> nodeMap; // Hashmap to store nodes with unique keys

    LinkedList() : head(nullptr) {}

    // Insert a new node at the end and store it in the hashmap with a unique key
    void insert(int key, int data)
    {
        Node *newNode = new Node(data);

        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }

        // Add node to hashmap
        nodeMap[key] = newNode;
    }
};

int main()
{
    LinkedList list;
    list.insert(1, 10); // Insert node with key 1 and data 10
    list.insert(2, 20); // Insert node with key 2 and data 20
    list.insert(3, 30); // Insert node with key 3 and data 30

    // Accessing a node directly using the key
    int key = 2;
    if (list.nodeMap.find(key) != list.nodeMap.end())
    {
        cout << "Node with key " << key << " has data: " << list.nodeMap[key]->data << endl;
    }
    else
    {
        cout << "Node with key " << key << " not found." << endl;
    }

    return 0;
}
