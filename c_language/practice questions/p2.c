#include <stdio.h>

int main()
{ int a,b,c,d,e ;
    printf("Enter First number:- ");
    
    scanf("%d",&a);
    
    printf("Enter second  number:- ");
    
    scanf("%d",&b);
     printf("Enter second  number:- ");
    
    scanf("%d",&c);
     printf("Enter second  number:- ");
    
    scanf("%d",&d);
    
    
    ((a < b) && (a < c) && (a<d)) ? printf("%d is minimum number",a) :
    ((b < c)&&(b<d)) ? printf("%d is minimum number",b) :
    (c<d)? printf("%d is minimum number",c) : printf("%d is minimum number",d) ;
    
    }
