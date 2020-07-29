class Solution {
    public int thirdMax(int[] nums) {

        long first=Long.MIN_VALUE, second=Long.MIN_VALUE, third=Long.MIN_VALUE;
        int length = nums.length;
        int actulLength = length;

        for(int i=0; i< length; i++){
            if(nums[i] >= first){
                if(nums[i] == first)
                    actulLength--;
                else {
                    third = second;
                    second = first;
                    first = nums[i];
                }
            }else if(nums[i] >= second){
                if(nums[i] == second)
                    actulLength--;
                else {
                    third = second;
                    second = nums[i];
                }
            }else if(nums[i] >= third){
                third = nums[i];
            }
        }

        if(actulLength < 3)
            return (int)first;
        else
            return (int)third;

    }
}