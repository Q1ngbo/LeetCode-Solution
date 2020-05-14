#include<iostream>
#include<vector>
using namespace std;

//DiGui
class Solution {
public:
    int* num;
    int chose(int n, vector<int>& nums)
    {
        if (n < 0)
            return 0;
        if (num[n] >= 0)
            return num[n];
        num[n] = (nums[n] + chose(n - 2, nums)) > chose(n - 1, nums) ? (nums[n] + chose(n - 2, nums)) : chose(n - 1, nums);
        return num[n];
    }
    int rob(vector<int>& nums)
    {
        num = new int[nums.size()];
        for (int i = 0; i < nums.size(); i++)
            num[i] = -1;
        return chose(nums.size() - 1, nums);
    }
};

//DiTui
class Solution {
public:
    int rob(vector<int>& nums)
    {
        if (nums.size() == 0)
            return 0;
        if (nums.size() == 1)
            return nums[0];
        int* num = new int[nums.size()];
        num[0] = nums[0];
        num[1] = nums[0] > nums[1] ? nums[0] : nums[1];
        for (int i = 2; i < nums.size(); i++)
            num[i] = (nums[i] + num[i - 2]) > num[i - 1] ? (nums[i] + num[i - 2]) : num[i - 1];
        return num[nums.size() - 1];
    }
};

int main()
{
    vector<int>nums;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        nums.push_back(m);
    }
    Solution so;
    cout << so.rob(nums);

    return 0;
}