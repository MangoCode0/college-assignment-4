//[4] C Program to Multiply Two Matrices Using Multi-Dimensional Arrays.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    
    printf("Enter rows and columns for first matrix: ");
    scanf("%d,%d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d,%d", &r2, &c2);
    
    if (c1 != r2) {
        printf("Error! Column of first matrix not equal to row of second.");
        return 0;
    }
    
    int a[r1][c1], b[r2][c2], result[r1][c2];
    
    //printf("Enter elements of matrix 1:\n");
    for(i = 0; i < r1; ++i) {
        for(j = 0; j < c1; ++j) {
            printf("Enter elements of matrix1 %d%d:",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    
    //printf("Enter elements of matrix 2:\n");
    for(i = 0; i < r2; ++i) {
        for(j = 0; j < c2; ++j) {
            printf("Enter elements of matrix2 %d%d:",i+1,j+1);
            scanf("%d", &b[i][j]);
        }
    }
    
    for(i = 0; i < r1; ++i) {
        for(j = 0; j < c2; ++j) {
            result[i][j] = 0;
            for(k = 0; k < c1; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    printf("Resultant Matrix:\n");
    for(i = 0; i < r1; ++i) {
        for(j = 0; j < c2; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
