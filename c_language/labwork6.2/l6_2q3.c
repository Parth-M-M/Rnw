#include <stdio.h>

int main() {
    int a ;
     printf("enter number :- ");
     scanf("%d",&a);
     int i = 1 ;
    do
    {
        if (i % 2 == 0)
        {
            printf("%d ",i);
        }
        i++;
    
    }while(i<=a);

    return 0;
}
