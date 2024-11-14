#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to find the LCA of two nodes in a BST
TreeNode *findLCA(TreeNode *root, int p, int q)
{
    if (!root)
        return nullptr; // If the root is null, there's no LCA

    // If both nodes are smaller than the root, LCA must be in the left subtree
    if (p < root->val && q < root->val)
    {
        return findLCA(root->left, p, q);
    }
    // If both nodes are greater than the root, LCA must be in the right subtree
    else if (p > root->val && q > root->val)
    {
        return findLCA(root->right, p, q);
    }
    // Otherwise, root is the LCA
    else
    {
        return root;
    }
}

int main()
{
    // Creating a simple BST
    TreeNode *root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);

    int p = 2, q = 8;
    TreeNode *lca = findLCA(root, p, q);

    if (lca)
    {
        cout << "The LCA of " << p << " and " << q << " is " << lca->val << "." << endl;
    }
    else
    {
        cout << "LCA does not exist in the tree." << endl;
    }

    return 0;
}
