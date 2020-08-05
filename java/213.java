class Solution {
    public int rob(int[] nums) {
        int length = nums.length;
        if(length == 0)
            return 0;
        if(length == 1)
            return nums[0];
        if(length == 2)
            return Math.max(nums[0], nums[1]);

        List<Integer> res = new LinkedList<Integer>();

        res.add(nums[0]);
        res.add(Math.max(nums[0], nums[1]));
        int sum;
        for(int i=2; i<length-1; i++){
            sum = nums[i] + res.get(i-2);
            res.add(Math.max(sum, res.get(i-1)));
        }

        int maxa = res.get(length-2);
        res.clear();
        res.add(0);
        res.add(nums[1]);
        res.add(Math.max(nums[1], nums[2]));

        for(int i=3; i<length; i++){
            sum = nums[i] + res.get(i-2);
            res.add(Math.max(sum, res.get(i-1)));
        }
        int maxb = res.get(length-1);

        return Math.max(maxa, maxb);


    }
}