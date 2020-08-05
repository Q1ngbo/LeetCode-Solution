class Solution {
    public int maxProfit(int[] prices) {
        int length = prices.length;
        if(length < 2)
            return 0;
        int val=0, tmp;
        for(int i=1; i< length; i++){
            tmp = prices[i] - prices[i-1];

            if(tmp > 0)
                val += tmp;
        }

        return val;
    }
}