#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> solve(vector<int> nums)
    {
        if(nums.size()==1)
        {
            vector<vector<int>> re;
            vector<int> a;
            a.push_back(nums[0]);
            re.push_back(a);
            return re;
        }
        vector<vector<int>> result;
        for (int i = 0; i < nums.size(); i++)
        {
            int a=nums[i];
            vector<int> t;
            for (int j = 0; j < nums.size(); j++)
                if(i!=j)
                    t.push_back(nums[j]);
            vector<vector<int>> re=solve(t);
            for (int j = 0; j < re.size(); j++)
            {
                re[j].push_back(a);
                result.push_back(re[j]);
            }
        }
        return result;
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        return solve(nums);
    }
};