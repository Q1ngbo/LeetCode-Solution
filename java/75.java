class Solution {
    public void sortColors(int[] nums) {
        int length = nums.length;
        int tmp;
        for(int i=0; i< length; i++){
            for(int k=1; k<length-i;k++){
                if(nums[k-1] > nums[k]){
                    tmp = nums[k-1];
                    nums[k-1] = nums[k];
                    nums[k]=tmp;
                }
            }
        }

    }
}