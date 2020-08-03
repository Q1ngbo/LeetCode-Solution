class Solution {
    public int removeDuplicates(int[] nums) {
        int length = nums.length;
        int i=0, j=1, count=1;

        while (j < length){
            if(nums[i] != nums[j]){
                i++;
                count=0;
                nums[i] = nums[j];
            }else if((nums[i] == nums[j] && count<=1)){
                i++;
                nums[i] = nums[j];
            }
            if(nums[i] == nums[j]){
                count++;
            }
            j++;
        }

        return i+1;
    }
}