#include <stdio.h>

int main() {
    int row ,column,cnt=0;
    float sum=0 ;
    printf("please Enter row for your 2d array:-");
    scanf("%d",&row);
    printf("please Enter column for your 2d array:-");
    scanf("%d",&column);
    int a [row][column];
    int b [row][column];
    int c [row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("please enter value for a[%d][%d]:- ",i,j);
            scanf("%d",&a[i][j]);
            
            
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("please enter value for b[%d][%d]:- ",i,j);
            scanf("%d",&b[i][j]);
            c[i][j] = a[i][j] + b[i][j];
            
        }
    }
    for(int i=0;i<row;i++)
    { 
        for(int j=0;j<column;j++)
        {   
            printf(" %d ",c[i][j]);
          
        }
        printf("\n");
    }
    return 0;
}
