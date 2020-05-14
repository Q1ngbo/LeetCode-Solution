#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution 
{
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        vector<string> opr;
        int j=0;
        for (int i = 1; i <= n; i++)
        {
            opr.push_back("Push");
            if(target[j]!=i)
                opr.push_back("Pop");
            else 
                j++;
            if(j==target.size())
                break;
        }
        return opr;
    }
};