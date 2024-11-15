#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *findLCA(TreeNode *root, int p, int q)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (p > root->val && q < root->val)
    {
        return findLCA(root->left, p, q);
    }
    else if (p > root->val && q > root->val)
    {
        return findLCA(root->right, p, q);
    }
    else
    {
        return root;
    }
}
int main()
{
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
        cout << "The LCA of" << p << "and" << "q" << lca->val << " " << endl;
    }
    else
    {
        cout << "LCA does not exist in the tree." << endl;
    }
    return 0;
}