#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution 
{
public:
    int longestSubarray(vector<int>& nums, int limit) 
    {
        int maxLength = 0, minNum = INT_MAX, maxNum = INT_MIN, length = 0;
        for(int i = 0, j = 0; j < nums.size();)
        {
            minNum = min(nums[j], minNum);
            maxNum = max(nums[j], maxNum);
            if(abs(maxNum - minNum) > limit)
            {
                i++;
                j = i;
                minNum = INT_MAX, maxNum = INT_MIN;
                length = 0;
            }
            else 
            {
                length++;
                j++;
                maxLength = max(length, maxLength);
            }
        }
        return maxLength;
    }
};

int main()
{
    Solution so;
    vector<int> nums;
    int limit,n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>limit;
        nums.push_back(limit);
    }
    cin>>limit;
    cout<<so.longestSubarray(nums,limit)<<endl;

    system("pause");
    return 0;
}