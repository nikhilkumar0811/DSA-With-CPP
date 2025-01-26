#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

// DFS to calculate the depth of a tree
int dfs(int node, vector<int> &visited, vector<vector<int>> &adj)
{
    visited[node] = 1;
    int depth = 0;

    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            depth = max(depth, dfs(neighbor, visited, adj));
        }
    }

    visited[node] = 0;
    return depth + 1;
}

int maximumInvitations(vector<int> &favorites)
{
    int n = favorites.size();
    vector<int> visited(n, 0);
    vector<int> in_degree(n, 0);
    vector<vector<int>> adj(n);

    // Build adjacency list
    for (int i = 0; i < n; i++)
    {
        adj[favorites[i]].push_back(i);
        in_degree[favorites[i]]++;
    }

    // Handle mutual pairs
    vector<int> pair_length(n, 0);
    int mutual_pairs_length = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == favorites[favorites[i]] && i < favorites[i])
        { // Mutual pair
            int left_chain = dfs(i, visited, adj) - 1;
            int right_chain = dfs(favorites[i], visited, adj) - 1;
            mutual_pairs_length += (2 + left_chain + right_chain);
        }
    }

    // Detect cycles and calculate maximum cycle length
    vector<int> cycle_visited(n, 0);
    int max_cycle_length = 0;

    for (int i = 0; i < n; i++)
    {
        if (!cycle_visited[i])
        {
            int node = i;
            int count = 0;

            while (!cycle_visited[node])
            {
                cycle_visited[node] = 1;
                node = favorites[node];
                count++;
            }

            int cycle_start = node;
            int cycle_length = 0;

            do
            {
                cycle_length++;
                node = favorites[node];
            } while (node != cycle_start);

            max_cycle_length = max(max_cycle_length, cycle_length);
        }
    }

    return max(mutual_pairs_length, max_cycle_length);
}

int main()
{
    // Test case 1
    vector<int> favorites1 = {2, 2, 1, 2};
    cout << "Maximum invitations: " << maximumInvitations(favorites1) << endl;

    // Test case 2
    vector<int> favorites2 = {1, 2, 0};
    cout << "Maximum invitations: " << maximumInvitations(favorites2) << endl;

    // Test case 3
    vector<int> favorites3 = {3, 0, 1, 4, 1};
    cout << "Maximum invitations: " << maximumInvitations(favorites3) << endl;

    return 0;
}
