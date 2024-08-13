//[5] C Program to Find Transpose of a Matrix.

#include <stdio.h>

int main() {
    int r, c, i, j;
    
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    
    int a[r][c], transpose[c][r];
    
    printf("Enter elements of matrix:\n");
    for(i = 0; i < r; ++i) {
        for(j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i = 0; i < r; ++i) {
        for(j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }
    }
    
    printf("Transpose of Matrix:\n");
    for(i = 0; i < c; ++i) {
        for(j = 0; j < r; ++j) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}