#include<stdio.h>

int main(){
    // 2D array - An array, where each element is an entire array. Useful if you need a matrix, grid, or table of data.

    int matrix[3][3] = {{2, 6, 4}, {3, 7, 5},{7,8,9}};
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    printf("%d\n", matrix[1][2]);
    for (int i = 0; i < rows;i++){
        for (int j = 0; j < columns;j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    

        return 0;
}