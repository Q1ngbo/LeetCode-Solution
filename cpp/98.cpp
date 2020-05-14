#include <iostream>
#include<vector>
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
    vector<int> nums;
    bool flag;
    void search(TreeNode *root)
    {
        if(root==NULL||!flag)
            return;
        search(root->left);
        nums.push_back(root->val);
        if(nums.size()>1&&nums[nums.size()-1]<=nums[nums.size()-2])
            flag=false;
        search(root->right);
    }
    bool isValidBST(TreeNode *root)
    {
        flag=true;
        search(root);
        return flag;
    }
};