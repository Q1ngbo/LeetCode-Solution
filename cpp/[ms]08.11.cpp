#include<iostream>

using namespace std;

class Solution {
public:
    int waysToChange(int n)
    {
        int mod = 1000000007;
        int coins[4] = { 1,5,10,25 };
        int* res = new int[n + 1];
        for (int i = 0; i < n + 1; i++)
            res[i] = 1;
        for (int i = 1; i < 4; i++)
            for (int j = 1; j <= n; j++)
                if (j >= coins[i])
                    res[j] = (res[j] + res[j - coins[i]]) % mod;
        return res[n];
    }
};