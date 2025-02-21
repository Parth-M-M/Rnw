#include <stdio.h>

int main() {
    int i,j;
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                    if(j>=6-i)
                    {
                        printf("%d",i+j-5);
                    }
                    else
                    {
                        printf(" ");
                    }
                
            }
        printf("\n");
        }

    return 0;
}
