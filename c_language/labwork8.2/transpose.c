#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int a[r][c]; 
    int b[c][r]; 
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            b[i][j] = a[j][i];
            
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

