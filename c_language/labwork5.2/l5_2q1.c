#include <stdio.h>

int main()
{ int a,b,c ;
    printf("Enter First number:- ");
    
    scanf("%d",&a);
    
    printf("Enter second  number:- ");
    
    scanf("%d",&b);
    
    printf("Enter third number:- ");
    
    scanf("%d",&c);
    
    
    
     if (a <= b)  
    {
        if (a <= c) 
        {
            printf("%d is the smallest number.\n", a);
        }
        else  
        {
            printf("%d is the smallest number.\n", c);
        }
    }
    else  
    {
        if (b <= c) 
        {
            printf("%d is the smallest number.\n", b);
        }
        else  
        {
            printf("%d is the smallest number.\n", c);
        }
    }
    
    return 0;
}
