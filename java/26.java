class Solution {
    public int removeDuplicates(int[] nums) {
        int length = nums.length;
        if(length == 0)
            return 0;
        if(length == 1)
            return 1;
        int i=0, j=1;

        while (j< length){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
            j++;
        }


        return i+1;
    }
}