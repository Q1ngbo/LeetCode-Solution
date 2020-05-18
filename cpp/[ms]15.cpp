class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t m=n;
        int sum=0;
        while(m)
        {
            m=m&(m-1);
            sum++;
        }
        return sum;
    }
};