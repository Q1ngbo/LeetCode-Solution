#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    string convert(string s, int numRows) 
    {
        if(numRows==1)
            return s;
        vector<vector<char>> st;
        int length=s.length();
        int pt=0;
        for (int i = 0;; i++)
        {
            vector<char>t;
            for (int j = 0; j < numRows; j++)
            {
                if(i%(numRows-1)==0||(i%(numRows-1)==numRows-j-1))
                    t.push_back(s[pt++]);
                else 
                    t.push_back(' ');
                if(pt == length)
                    break;
            }
            st.push_back(t);
            if(pt == length)
                    break;
        }
        string re;
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j < st.size(); j++)
            {
                if(st[j][i]!=' '&&st[j][i]!='\0')
                    re.push_back(st[j][i]);
            }
        }
        return re;
    }
};