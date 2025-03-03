#include <stdio.h>
 int ncheck(int a)
{
    if (a%3==0&&a%5==0)
    {
        printf("the given number is divisible by 3 & 5 ");
    }
    else 
    {
        printf("the given number is not divisible by 3 & 5 ");
    }
    
}
int main() {
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    ncheck(a);
    
    return 0;
}
