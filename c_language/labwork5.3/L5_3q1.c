#include <stdio.h>

int main()
{ int a,b,c ;
    printf("Enter First number:- ");
    
    scanf("%d",&a);
    
    printf("Enter second  number:- ");
    
    scanf("%d",&b);
     printf("Enter second  number:- ");
    
    scanf("%d",&c);
     
    
    ((a < b) && (a < c) ) ? printf("%d is minimum number",a) :
    (b < c) ? printf("%d is minimum number",b) : printf("%d is minimum number",c) ;
    
    }
