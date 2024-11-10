#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// In-Order Traversal
void inOrder(TreeNode *root)
{
    if (root == nullptr)
        return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

// Pre-Order Traversal
void preOrder(TreeNode *root)
{
    if (root == nullptr)
        return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// Post-Order Traversal
void postOrder(TreeNode *root)
{
    if (root == nullptr)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}

int main()
{
    // Create a sample binary tree:
    //        1
    //       / \
    //      2   3
    //     / \   \
    //    4   5   6

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    cout << "In-Order Traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Pre-Order Traversal: ";
    preOrder(root);
    cout << endl;

    cout << "Post-Order Traversal: ";
    postOrder(root);
    cout << endl;

    // Clean up allocated memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}
