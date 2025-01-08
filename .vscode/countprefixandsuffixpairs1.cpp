#include <vector>
#include <string>
#include <unordered_map>
#include <memory>

using namespace std;

struct TrieNode
{
    unordered_map<int, shared_ptr<TrieNode>> children;
    int count = 0;
};

class Trie
{
public:
    int insert(const string &word)
    {
        int n = word.length();
        int count = 0;
        shared_ptr<TrieNode> node = root;
        for (int i = 0; i < n; ++i)
        {
            int key = hash(word[i], word[n - 1 - i]);
            if (node->children[key] == nullptr)
                node->children[key] = make_shared<TrieNode>();
            node = node->children[key];
            count += node->count;
        }
        ++node->count;
        return count;
    }

private:
    shared_ptr<TrieNode> root = make_shared<TrieNode>();

    int hash(char prefix, char suffix)
    {
        return 26 * (prefix - 'a') + (suffix - 'a');
    }
};

class Solution
{
public:
    long long countPrefixSuffixPairs(vector<string> &words)
    {
        long long ans = 0;
        Trie trie;
        for (const string &word : words)
            ans += trie.insert(word);
        return ans;
    }
};
