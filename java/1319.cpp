class Solution {
    int[] cable;
    boolean[] flags;

    public int findX(int x){
        int a = x;

        while (x != cable[x]){
            x = cable[x];
        }

        while (a != cable[a]){
            int z = a;
            a = cable[a];
            cable[z] = x;
        }

        return x;
    }

    public int makeConnected(int n, int[][] connections) {
        if(n == 1)
            return 0;
        cable = new int[n+1];
        flags = new boolean[n+1];

        for(int i=0; i<n; i++){
            cable[i] = i;
            flags[i] = false;
        }

        int more = 0, need=0;

        for (int[] connection : connections) {
            int a = connection[0], b = connection[1];
            int cA = findX(a), cB = findX(b);

            if (cA == cB) {
                more++;
            } else {
                cable[cA] = cB;
            }
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            flags[findX(i)] = true;

            if(flags[i]){
                cnt++;
            }
        }
        need = cnt-1;
        if(more < need){
            return -1;
        }
        return need;

    }
}