// 这个需要用hashMap

class Solution {
    public int findShortestSubArray(int[] nums) {
        int length = nums.length;
        int du=0, number=-1;
        for(int num:nums){
            int count=0;
            for(int k:nums){
                if(k == num){
                    count++;
                }
            }

        }
    }

}