#include <stdio.h>

int main() {
     int i ;
     printf("enter number :- ");
     scanf("%d",&i);
     
    while(i>=0)
    {
        if(i % 2 == 0)
        {
            i--;
        }
        else 
        {
            printf("%d ",i);
            i--;
        }
    }

    return 0;
}
