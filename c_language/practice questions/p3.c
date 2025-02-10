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
     printf("Enter second  number:- ");
    
    scanf("%d",&e);
    
    
    ((a < b) && (a < c) && (a<d)&& (a<e)) ? printf("%d is minimum number",a) :
    ((b < c)&&(b<d)&&(b<e)) ? printf("%d is minimum number",b) :
    ((c<d)&&(c<e))? printf("%d is minimum number",c) : 
     ( d < e ) ? printf("%d is minimum number",d) : printf("%d is minimum number",e);
    
    }
