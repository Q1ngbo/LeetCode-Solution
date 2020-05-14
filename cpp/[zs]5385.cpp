#include <iostream>
#include <math.h>

class Solution
{
public:
    int maxDiff(int num)
    {
        int a = 0, b = 0;
        int numsa[9], numsb[9];
        int n = 0;
        int ti = -1, tj = -1;
        while (num)
        {
            numsa[n] = num % 10;
            numsb[n] = numsa[n];
            num = num / 10;
            n++;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (numsa[i] != 9 && ti == -1)
            {
                ti = numsa[i];
                numsa[i] = 9;
            }
            else if (numsa[i] == ti)
                numsa[i] = 9;
        }
        if (numsb[n-1] == 1)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (tj != -1)
                {
                    if (numsb[i] == tj)
                        numsb[i] = 0;
                }
                else if (numsb[i] != 1&&numsb[i]!=0)
                {
                    tj = numsb[i];
                    numsb[i] = 0;
                }
            }
        }
        else
        {
            tj=numsb[n-1];
            for (int i = n - 1; i >= 0; i--)
                if(numsb[i]==tj)
                    numsb[i]=1;
        }
        for (int i = 0; i < n; i++)
        {
            a += numsa[i] * pow(10, i);
            b += numsb[i] * pow(10, i);
        }
        std::cout<<a<<","<<b<<std::endl;
        return a - b;
    }
};

int main()
{
    Solution so;
    int a;
    std::cin>>a;
    std::cout<<so.maxDiff(a);
    system("pause");
    return 0;
}