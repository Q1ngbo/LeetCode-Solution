#include <iostream>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        if(x==0)
            return 0;
        double re=1;
        int m=n>0?n:-n;
        for(int i=0;i<m;i++)
            re=re*x;
        if(n>=0)
            return re;
        else 
            return 1.0/re;
    }
};