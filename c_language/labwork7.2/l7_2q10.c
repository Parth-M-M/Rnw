#include <stdio.h>

int main() {
    int i,j;
        for(i=1;i<=5;i++)
        {   int k = 1;
            for(j=1;j<=9;j++)
                {
                        if(j>=6-i&&j<=4+i)
                        {
                            printf("%d",k);
                            j<5?k++:k--;
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
