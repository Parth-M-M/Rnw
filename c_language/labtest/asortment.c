#include <stdio.h>

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    float a[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        scanf("%f", &a[i]); 
    }
    printf("Negative numbers in the array: ");
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            printf("%.f ", a[i]);
    }
    printf("\n");
        
    }
    return 0;
}




-----------------------------------------------------------------------------------




#include <stdio.h>

int main() {
    int r , c ;
    int x=0 ,y=0,z;
    printf("Enter no. of rows you want :- ");
    scanf("%d",&r);
    printf("Enter no. of column you want :- ");
    scanf("%d",&c);
    int a[r][c];
    for(int i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < r ; j++)
        {
                printf("a[%d][%d]: ",i,j);
                scanf("%d",&a[i][j]);
        }   
    }
    for(int i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < r ; j++)
        {
           x = a[i][j];
           if (y>=x)
           {
               z=y;
           }
           else
           {
               z=x;
           }
        }   
    }
    printf("The largest element is :- %d",z);
    return 0;
}






-----------------------------------------------------------------------------------




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

    printf("Original Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Transposed Matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

