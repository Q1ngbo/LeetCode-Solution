#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> re;
        if(candies.size()==0)
            return re;
        int max=candies[0];
        re.resize(candies.size());
        for (int i = 0; i < candies.size(); i++)
            if(candies[i]>max)
                max=candies[i];
        for (int i = 0; i < candies.size(); i++)
        {
            if(candies[i]+extraCandies>=max)
                re[i]=true;
            else
                re[i]=false;
        }
        return re;
    }
};