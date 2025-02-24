#include <stdio.h>

int main() {
    int row ,column,sum=0;
    printf("please Enter row for your 2d array:-");
    scanf("%d",&row);
    column = row;
    int a [row][column];
    
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
         int temp = a[i][row - i - 1];
         sum +=temp;
    }
    printf("%d",sum);
    
    return 0;
}
