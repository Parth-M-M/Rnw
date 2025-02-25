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






-----------------------------------------------------------------------------------





#include <stdio.h>

int main() {
    int r, c, sum = 0;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int choice;
    printf("Enter 1 for row sum, 0 for column sum: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int rtemp;
        printf("Enter row number: ");
        scanf("%d", &rtemp);
        if (rtemp >= 0 && rtemp < r) 
        {
            printf("Elements in row %d: ", rtemp);
            for (int j = 0; j < c; j++) 
            {
                printf("%d, ", a[rtemp][j]);
                sum += a[rtemp][j];
            }
            printf("\nSum of row %d is: %d\n", rtemp, sum);
        } 
        else 
        {
            printf("Invalid row number\n");
        }
    } 
    else if (choice == 0)
    { 
        int ctemp;
        printf("Enter column number: ");
        scanf("%d", &ctemp);
        if (ctemp >= 0 && ctemp < c) 
        {
            printf("Elements in column %d: ", ctemp);
            for (int i = 0; i < r; i++) 
            {
                printf("%d, ", a[i][ctemp]);
                sum += a[i][ctemp];
            }
            printf("\nSum of column %d is: %d\n", ctemp, sum);
        } 
        else 
        {
            printf("Invalid column number\n");
        }
    } 
    else 
    {
        printf("Invalid choice\n");
    }

    return 0;
}






-----------------------------------------------------------------------------------
