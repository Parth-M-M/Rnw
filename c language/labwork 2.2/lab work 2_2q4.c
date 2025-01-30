#include <stdio.h>

int main()
{   int p ;
    int r ;
    int n ;
    printf(" Enter principal amount :- ");
    scanf("%d", &p); 
    printf(" Enter rate amount :- ");
    scanf("%d", &r);
    printf(" Enter number of month amount :- ");
    scanf("%d", &n);
    
    float s = (float)(p * r * n) / 100;
    printf(" simple interest is :-%.2f  ", s);
    
    return 0;
}