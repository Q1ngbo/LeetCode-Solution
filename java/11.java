// 方法1 暴力
class Solution {
    public int maxArea(int[] height) {
        int length = height.length - 1;
        int maxV=0, tmp;

        for(int i=0; i < length; i++){
            for(int k=length; k > i; k--){
                tmp = Math.min(height[i], height[k]) * (k - i);

                if(tmp > maxV)
                    maxV = tmp;
            }
        }

        return maxV;
    }
}

// 方法二 对撞指针
class Solution {
    public int maxArea(int[] height) {
        int k = height.length - 1;
        int i=0;
        int maxV = (k-i)*Math.min(height[i], height[k]);

        while (i<k){
            if(height[i] < height[k])
                i++;
            else
                k--;

            maxV = Math.max(maxV, (k-i)*Math.min(height[i], height[k]));
        }

        return maxV;
    }
}