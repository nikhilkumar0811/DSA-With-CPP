#include <iostream>
using namespace std;

// Definition of a Node in the binary tree
struct Node
{
    int data;
    Node *left;
    Node *right;

    // Constructor to create a new node
    Node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};

// Class for the BinaryTree
class BinaryTree
{
public:
    Node *root;

    // Constructor to initialize the tree with root as nullptr
    BinaryTree()
    {
        root = nullptr;
    }

    // Function to insert a node in the binary tree
    void insert(int value)
    {
        root = insertRec(root, value);
    }

    // Recursive function to insert a new value in the tree
    Node *insertRec(Node *node, int value)
    {
        if (node == nullptr)
        {
            // If the tree is empty or we find a nullptr, create a new node
            return new Node(value);
        }

        // Otherwise, recursively insert in left or right subtree
        if (value < node->data)
        {
            node->left = insertRec(node->left, value);
        }
        else
        {
            node->right = insertRec(node->right, value);
        }

        return node;
    }

    // Function to perform in-order traversal
    void inorderTraversal()
    {
        inorderRec(root);
    }

    // Recursive function to perform in-order traversal
    void inorderRec(Node *node)
    {
        if (node == nullptr)
        {
            return;
        }
        // Traverse left subtree
        inorderRec(node->left);

        // Visit the root (current node)
        cout << node->data << " ";

        // Traverse right subtree
        inorderRec(node->right);
    }
};

int main()
{
    BinaryTree tree;

    // Insert nodes into the tree
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    // Perform in-order traversal and print the nodes
    cout << "In-order traversal of the binary tree: ";
    tree.inorderTraversal();
    cout << endl;

    return 0;
}
