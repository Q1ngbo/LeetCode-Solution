class Node{
    int x, y;

    public Node(int _x, int _y){
        x = _x;
        y = _y;
    }
}

class Solution {
    boolean[][] flag;
    int col, row;
    int[] X = {0, 0, 1, -1};
    int[] Y = {1, -1, 0, 0};


    boolean judge(int x, int y, char[][] grid){
        if(x<0 || x>=col || y<0 || y>=row){
            return false;
        }
        return grid[x][y] != '0' && !flag[x][y];
    }

    void BFS(int x, int y, char[][] grid){
        Node node = new Node(x, y);
        Queue<Node> queue = new LinkedList<>();
        queue.add(node);
        flag[x][y] = true;

        while (!queue.isEmpty()){
            Node tmp = queue.peek();
            queue.poll();

            for(int i=0; i<4; i++){
                int newX = tmp.x + X[i];
                int newY = tmp.y + Y[i];

                if(judge(newX, newY, grid)){
                    Node n = new Node(newX, newY);
                    queue.add(n);
                    flag[newX][newY] = true;
                }
            }
        }
    }

    public int numIslands(char[][] grid) {
        int cnt=0;
        col = grid.length;
        if(col == 0)
            return 0;
        row = grid[0].length;
        flag = new boolean[col][row];
        for(int i=0; i<col; i++){
            for(int k=0; k<row; k++)
                flag[i][k] = false;
        }

        for(int i=0; i<col; i++){
            for(int k=0; k<row; k++){
                if(grid[i][k] == '1' && flag[i][k] == false){
                    cnt++;
                    BFS(i, k, grid);
                }
            }
        }


        return cnt;
    }
}