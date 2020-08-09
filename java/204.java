class Solution {
    public int countPrimes(int n) {
        boolean[] res = new boolean[n];
        Arrays.fill(res, true);

        for(int i=2; i*i<n; i++){
            if(isPrim(i)){
                for (int k=2*i; k<n; k+=i)
                    res[k] = false;
            }
        }

        int count=0;
        for(int i=2; i<n; i++)
            if(res[i])
                count++;

        return count;
    }


    public boolean isPrim(int n){
        for(int i=2; i*i<=n; i++){
            if(n%i ==0)
                return false;
        }

        return true;
    }
}