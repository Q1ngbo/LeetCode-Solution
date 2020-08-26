class Solution {

    int[] friends;

    public int findFriend(int x){
        int a = x;

        while(x != friends[x]){
            x = friends[x];
        }

        while(a != friends[a]){
            int z = a;
            a = friends[a];
            friends[z] = x;
        }

        return x;
    }

    public void Union(int a, int b){
        int frA = findFriend(a);
        int frB = findFriend(b);

        if(frA != frB){
            friends[frA] = frB;
        }
    }

    public int findCircleNum(int[][] M) {
        int col = M.length;


        if(col < 1)
            return 0;
        friends = new int[col+1];
        boolean[] flags = new boolean[col+1];

        for(int i=0; i<col; i++){
            friends[i] = i;
            flags[i] = false;
        }

        for(int i=0; i<col; i++){
            for(int k=i+1; k<col; k++){
                if(i != k && M[i][k] == 1){
                    Union(i, k);
                }
            }
        }
        int cnt = 0;
        for(int i=0; i<col; i++){
            flags[findFriend(i)] = true;

            if(flags[i] == true){
                cnt ++;
            }
        }

        return cnt;
    }
}