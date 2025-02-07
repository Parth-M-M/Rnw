#include <stdio.h>

void check(int x)
{
    if(x >= 100)
    {
      printf("invalid input\n") ;
      
    }
    else if (x<=0)
    {
        printf("invalid input\n");
        
    }
    else
    {
      
    }

    
}


int main()
{   int a,b,c,x;
    float d ;
    printf("Enter English marks :- ");
    scanf("%d",&a);
    check(a);
    printf("Enter English marks :- ");
    scanf("%d",&b);
    check(b);
    printf("Enter Science marks :- ");
    scanf("%d",&c);
    check(c);
    d = (a + b + c) / 3 ;
    printf("Your Average Marks are :- %f",d);
    return 0;
}

