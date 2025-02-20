#include <stdio.h>

int main()
{
    int i,j,k,l;
    for(i=1;i<=7;i++)
    { 
        for(j=1;j<=5;j++)
        {   k = i ;
            l = j ; 
            if(k == 7 )
            {
                k = 0;
            }
            if(j==1||j==2||j==3||j==4||j==5||i==1||i==7)
            {  if(j==1)
            {
                l = 0;
            }
                if((i==k&&j==l))
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
