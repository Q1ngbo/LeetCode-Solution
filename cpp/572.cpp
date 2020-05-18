#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool isSameTree(TreeNode *t1, TreeNode *t2)
    {
        if (t1 == NULL && t2 == NULL)
            return true;
        else if (t1 != NULL && t2 != NULL)
        {
            if (isSameTree(t1->left, t2->left) && isSameTree(t1->right, t2->right) && t1->val == t2->val)
                return true;
            else
                return false;
        }
        else
            return false;
    }

    bool isSubtree(TreeNode *s, TreeNode *t)
    {
        if(s==NULL)
            return false;
        if(isSameTree(s,t))
            return true;
        else if(isSubtree(s->left,t))
            return true;
        else if(isSubtree(s->right,t))
            return true;
        else 
            return false;
    }
};