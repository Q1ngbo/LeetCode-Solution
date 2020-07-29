class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int length = nums.length;

        int maxn=0, cur=0;

        for(int i=0; i< length; i++){
            if(nums[i] == 1){
                cur += 1;
                if(cur > maxn)
                    maxn = cur;
            }

            else
                cur = 0;
        }

        return maxn;
    }
}