#include <stdio.h>

int main() {
     int i ;
     int j ;
     printf("enter first number :- ");
     scanf("%d",&i);
     printf("enter second number :- ");
     scanf("%d",&j);
     
    while(i<=j)
    {
        printf("%d ",i);
        i = i+4;
    }

    return 0;
}
