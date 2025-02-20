#include <stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<=7;i++)
    { 
        for(j=1;j<=5;j++)
        {  
            if(j==1||j==2||j==3||j==4||j==5)
            {  
           
                if((i==7&&j==1||i==7&&j==5||i==1&&j==2||i==1&&j==3||i==1&&j==4||i==2&&j==2||i==2&&j==3||i==2&&j==4||i==3&&j==2||i==3&&j==3||i==3&&j==4||i==4&&j==2||i==4&&j==3||i==4&&j==4||i==5&&j==2||i==5&&j==3||i==5&&j==4||i==6&&j==2||i==6&&j==3||i==6&&j==4))
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
