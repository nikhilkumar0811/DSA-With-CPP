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

// Class for BinaryTree
class BinaryTree
{
public:
    Node *root;

    // Constructor to initialize the tree
    BinaryTree()
    {
        root = nullptr;
    }

    // Function to insert a node into the binary tree
    void insert(int value)
    {
        root = insertNode(root, value);
    }

    // Recursive helper function to insert a value
    Node *insertNode(Node *node, int value)
    {
        if (node == nullptr)
        {
            // Create a new node if the current node is empty
            return new Node(value);
        }

        if (value < node->data)
        {
            // Insert in the left subtree
            node->left = insertNode(node->left, value);
        }
        else
        {
            // Insert in the right subtree
            node->right = insertNode(node->right, value);
        }
        return node;
    }

    // Function for pre-order traversal
    void preOrderTraversal()
    {
        preOrder(root);
        cout << endl;
    }

    // Recursive helper function for pre-order traversal
    void preOrder(Node *node)
    {
        if (node == nullptr)
        {
            return;
        }

        // Visit the root
        cout << node->data << " ";

        // Traverse the left subtree
        preOrder(node->left);

        // Traverse the right subtree
        preOrder(node->right);
    }
};

int main()
{
    BinaryTree tree;

    // Insert nodes into the tree
    tree.insert(40);
    tree.insert(20);
    tree.insert(60);
    tree.insert(10);
    tree.insert(30);
    tree.insert(50);
    tree.insert(70);

    // Perform pre-order traversal and print the nodes
    cout << "Pre-order traversal of the binary tree: ";
    tree.preOrderTraversal();

    return 0;
}
