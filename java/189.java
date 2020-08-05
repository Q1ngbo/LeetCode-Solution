class Solution {
    public void rotate(int[] nums, int k) {
        int length = nums.length;

        while (k >0){
            int tmp = nums[length-1];
            for(int i=length-1; i>0; i--){
                nums[i] = nums[i-1];
            }
            nums[0] = tmp;
            k--;
        }
    }
}