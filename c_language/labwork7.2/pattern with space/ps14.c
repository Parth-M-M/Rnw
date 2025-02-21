#include <stdio.h>

int main() {
    int i,j;
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                    if(j>=6-i)
                    {
                        printf("%c",(i+j-5)+64);
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
