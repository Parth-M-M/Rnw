#include <stdio.h>

int main()
{   int a ;
    printf("Enter number :-");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The number is positive");
        
    }
    else if (a<0)
    {
        printf("The number is Negitive");
    }
    else
    {
        printf("The number is Neutral");
    }

    return 0;
}
