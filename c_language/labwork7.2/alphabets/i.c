#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1||j==5||j==3||i==1||i==7)
            {
                if((i==2&&j==1||i==3&&j==1||i==4&&j==1||i==5&&j==1||i==6&&j==1||i==2&&j==5||i==3&&j==5||i==4&&j==5||i==5&&j==5||i==6&&j==5))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
