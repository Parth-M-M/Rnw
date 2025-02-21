#include <stdio.h>

int main() {
    int i,j;
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                    if(j>=6-i)
                    {
                        printf("%d",5 - j + 6-i);
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
