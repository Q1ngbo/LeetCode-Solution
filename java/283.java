class Solution {
    public void moveZeroes(int[] nums) {
        int length = nums.length-1;

        for(int i=0; i<length; i++){
            if(nums[i] == 0){
                for (int k=i; k<length;k++){
                    nums[k]=nums[k+1];

                }
                if(nums[i] == 0)
                    i--;
                nums[length] = 0;
                length--;
            }
        }

        for(int c:nums){
            System.out.print(c+" ");
        }
    }
}

// 优化算法
class Solution2 {
    public void moveZeroes(int[] nums) {
        int length = nums.length;

        int j=0, i=-1;

        while(j<length){
            if(nums[j] != 0){
                i++;
                nums[i]=nums[j];
            }
            j++;
        }
        for(int k=i+1; k<length; k++){
            nums[k]=0;
        }
    }
}