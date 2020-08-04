class Solution {
    public List<Boolean> prefixesDivBy5(int[] A) {
        LinkedList<Boolean> res = new LinkedList<Boolean>();

        int length = A.length;
        long sum = 0;
        for(int i=0; i<length; i++){
            sum = (sum*2+A[i])%5;
            if(sum==0)
                res.add(true);
            else
                res.add(false);
        }

        return res;
    }
}