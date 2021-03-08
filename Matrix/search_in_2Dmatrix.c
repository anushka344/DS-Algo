/*Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

*/


bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int i,j;
    for (i=0;i<matrixSize;i++){
        for (j=0;j< *matrixColSize;j++){
            if (matrix[i][j]==target)
                return 1;
        }
    }
  return 0;
}
