/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        vector<vector<int>> result; // Stores level-wise nodes in top-to-bottom order
        if (!root)
            return result; // Edge case: return empty if tree is empty

        queue<TreeNode *> q; // Queue for BFS traversal
        q.push(root);        // Start BFS with the root

        while (!q.empty())
        {
            int n = q.size();  // Number of nodes at the current level
            vector<int> level; // To store nodes of the current level

            for (int i = 0; i < n; ++i)
            {
                TreeNode *node = q.front();
                q.pop();                    // Process each node at this level
                level.push_back(node->val); // Add node value to the level

                // Push the left and right children to the queue if they exist
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            result.push_back(level); // Store the current level
        }

        // Reverse the result to get bottom-to-top order
        reverse(result.begin(), result.end());
        return result;
    }
};
