#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int steps = 0;
        int start = 0;
        int end = 0;
        while (end < nums.size() - 1)
        {
            int maxd = end;
            for (int i = start; i <= end; i++)
                maxd =max(maxd,nums[i] + i);
            start = end + 1;
            end = maxd;
            steps++;
        }
        return steps;
    }
};