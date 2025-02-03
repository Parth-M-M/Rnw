#include <stdio.h>

int main()
{   int x ;
    int y ;
    printf("Enter x :-");
    scanf("%d" ,&x);
    printf("Enter y :-");
    scanf("%d" ,&y);
    int z = x - y ; 
    int s = z*z; 
    printf("square of x plus y is :- %d",s);

    return 0;
}