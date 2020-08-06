class Solution {
    public int maxSubArray(int[] nums) {
        if(nums.length==1)
            return nums[0];

        int[] res = new int[nums.length];

        res[0] = nums[0];

        int maxn = res[0];

        for(int i=1; i< nums.length; i++){
            res[i] = Math.max(res[i-1]+nums[i], nums[i]);
            if(res[i] > maxn)
                maxn = res[i];
        }


        return maxn;
    }
}