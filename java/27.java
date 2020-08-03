class Solution {
    public int removeElement(int[] nums, int val) {
        int i=-1, j=0;
        int length = nums.length;
        int count=0;

        while (j < length){
            if(nums[j] != val){
                i++;
                count++;
                nums[i] = nums[j];
            }
            j++;
        }


        return count;
    }
}