class Solution {
    public boolean canJump(int[] nums) {
        int[] res = new int[nums.length];
        Arrays.fill(res, 0);
        res[0] = 1;
        for(int i=0; i< nums.length; i++){
            if(res[i] == 1){
                int dist = nums[i];
                for(int k=1; k<=dist; k++){
                    if(i+k < nums.length){
                        res[i+k] = 1;
                    }
                }
            }
        }

        return res[nums.length-1]==1;
    }
}