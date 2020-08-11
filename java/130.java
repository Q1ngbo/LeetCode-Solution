class Solution {
    int m, n;
    public void solve(char[][] board) {
        m = board.length;
        if(m == 0)
            return;
        n = board[0].length;

        for(int i=0; i<m; i++){
            dfs(board, i, 0);
            dfs(board, i, n-1);
        }

        for(int i=1; i<n; i++){
            dfs(board, 0, i);
            dfs(board, m-1, i);
        }

        for(int i=0; i<m; i++){
            for(int k=0; k<n; k++){
                if(board[i][k] == 'A')
                    board[i][k] = 'O';
                else if(board[i][k] == 'O')
                    board[i][k] = 'X';
            }
        }

    }

    public void dfs(char[][] board, int x, int y){
        if(x<0 || x>=m || y<0 || y>=n || board[x][y] != 'O')
            return;

        board[x][y] = 'A';
        dfs(board, x-1, y);
        dfs(board, x+1, y);
        dfs(board, x, y+1);
        dfs(board, x, y-1);
    }
}