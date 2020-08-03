class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int stop=0, length=m+n;

        for(int c:nums2){
            int found=0;
            for(int i=stop; i<m;i++){
                if((i==0 && c<nums1[i])){
                    for(int k=m-1; k>=0;k--){
                        nums1[k+1] = nums1[k];
                    }
                    nums1[0]=c;
                    m++;
                    found=1;
                    break;
                }
                if(nums1[i]<=c && nums1[i+1]>c){
//                    System.out.println("c: "+ c + " val: " + nums1[i] +" m: "+m +" i: "+i);
                    for(int k=m-1; k>i;k--){
                        nums1[k+1] = nums1[k];
                    }
                    m++;
                    nums1[i+1]=c;
                    stop=i+1;
                    found=1;
                    break;
                }
            }
            if(found==0){
                nums1[m]=c;
                m++;
            }
        }
    }
}

// 优化 尾插法
class Solution1 {
    public void merge(int[] nums1, int m, int[] nums2, int n) {

        if(n < 1)
            return;
        if(m < 1){
            System.arraycopy(nums2, 0, nums1, 0, n);
            return;
        }
        int i=m-1, j=n-1, k=m+n-1;

        while (k >= 0){
            if((j<0 && i>=0) || (i>=0 && nums1[i] >= nums2[j])){
                nums1[k] = nums1[i];
                k--;
                i--;
            }
            if((i<0 && j>=0) || (j>=0 && nums2[j] >= nums1[i])){
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }

    }
}