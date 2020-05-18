#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
    {
        if(nums.size()==0)
            return 0;
        int res=INT_MIN;
        int fn=-1;
        for (int i = 0; i < nums.size(); i++)
        {
            fn=max(fn+nums[i],nums[i]);
            res=max(fn,res);
        }
        return res;
    }
};