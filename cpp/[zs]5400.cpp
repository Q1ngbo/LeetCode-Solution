#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    string destCity(vector<vector<string>>& paths) 
    {
        if(paths.size()==0)
            return "";
        string ss=paths[0][0];
        while (true)
        {
            bool flag=false;
            for (int i = 0; i < paths.size(); i++)
            {
                if(paths[i][0]==ss)
                {
                    ss=paths[i][1];
                    flag=true;
                }
            }
            if(!flag)
                break;
        }
        return ss;
    }
};