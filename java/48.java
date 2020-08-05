class Solution {
    public void rotate(int[][] matrix) {
        int size = matrix.length;
        for(int i=0; i<size; i++){
            for(int k=i; k<size; k++){
                int temp = matrix[i][k];
                matrix[i][k] = matrix[k][i];
                matrix[k][i] = temp;
            }
        }

        for(int i = 0; i<size;i++){
            for(int k=0; k < (size/2); k++){
                int temp = matrix[i][k];
                matrix[i][k] = matrix[i][size-1-k];
                matrix[i][size-1-k] = temp;
            }
        }
    }
}