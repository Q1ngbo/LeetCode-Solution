class Solution {
    public int singleNumber(int[] nums) {

        int res=0;

        for(int ch:nums)
            res ^= ch;

        return res;
    }
}