class Solution {
    public int findKthLargest(int[] nums, int k) {
        Arrays.sort(nums);

        int length = nums.length;


        return nums[length-k];
    }
}