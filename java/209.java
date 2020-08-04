class Solution {
    public int minSubArrayLen(int s, int[] nums) {
        int len = nums.length;

        if(len < 1)
            return 0;

        int res = len+2, i=0,k=0, sum=0;

        while (i < len){
            if(k < len && sum<s){
                sum += nums[k];
                k++;
            }else {
                sum -= nums[i];
                i++;
            }

            if(sum >= s){
                res = Math.min(res, (k-i));
            }
        }

        if(res == len+2)
            return 0;
        return res;
    }
}

/*
*   滑动的时候也可以让k始终指向当前要加的数
*   k=-1
*   if(k+1 < len && sum<s){
*       k++;
*       sum += nums[k];
*   }
*
*   in this way the length is (k-i+1) and k's final value is length-1;
* */