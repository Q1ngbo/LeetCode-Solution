#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool kLengthApart(vector<int> &nums, int k)
    {
        int *a = new int[nums.size()];
        int n = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] == 1)
                a[n++] = i;
        for (int i = 1; i < n; i++)
            if (a[i] - a[i - 1] - 1 < k)
                return false;
        return true;
    }
};