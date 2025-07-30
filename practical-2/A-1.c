#include <stdio.h>
int main() {
    int matrix[3][3] = {
        {0, 0, 1},
        {0, 1, 0},
        {1, 0, 0}
    };
    int  i,j,k = 0;
    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] != 0) {
                matrix[k][0] = i;
                matrix[k][1] = j;
                matrix[k][2] = matrix[i][j];
                k++;
            }
        }
    }
    printf("\nSparse Matrix (row, col, value):\n");
    for (i = 0; i < k; i++) {
      
        printf("%d %d %d\n", matrix[i][0], matrix[i][1], matrix[i][2]);
        
    }
    return 0;
}
