#include <iostream>
#include <vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    vector<vector<int>> result;
    int num;
    void solve(TreeNode *root, int n)
    {
        if (root == NULL)
            return;
        if (result.size() < n + 1)
        {
            vector<int> t;
            result.push_back(t);
        }
        result[n].push_back(root->val);
        solve(root->left, n + 1);
        solve(root->right, n + 1);
        return;
    }
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        solve(root, 0);
        return result;
    }
};