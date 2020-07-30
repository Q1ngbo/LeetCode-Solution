
class Solution {
    public int[] findErrorNums(int[] nums) {
        int length = nums.length;
        // Arrays.sort(nums);
        int[] res = new int[2];
        int lost = 0, more = 0;
        for (int i = 1; i <= length; i++) {
            int count = 0;
            for (int num : nums) {
                if (num == i)
                    count++;
            }
            if (count == 2) {
                more = i;
            }
            if (count == 0) {
                lost = i;
            }

            if(more!=0 && lost!=0)
                break;

        }
        res[0] = more;
        res[1] = lost;
        return res;

    }
}