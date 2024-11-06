#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode *invertTree(TreeNode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    TreeNode *temp = root->left; // Recursively invert the left and right subtrees
                                 //   root->left = invertTree(root->right);
                                 // root->right = invertTree(root->left);
    root->left = root->right;
    root->right = temp;
    return root;
}
void inorder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << "The original inorder traversal: ";
    inorder(root);
    cout << endl;

    // Invert the binary tree
    invertTree(root);

    // Print the inverted tree in inorder traversal
    cout << "The inverted inorder traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}