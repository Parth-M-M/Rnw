#include <stdio.h>

int main() {
    int i, j, k;
    
    for (i = 1; i <= 9; i++) {
        k=(i <= 5)?(6 - i):(i - 4);
        for (j = 1; j <= k; j++) {
            printf("%d",j);
        }
        
        printf("\n");
    }
    
    return 0;
}

