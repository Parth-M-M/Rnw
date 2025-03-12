#include <stdio.h>
int add(int a , int b)
{
    return a + b;
}
int sub(int a , int b)
{
    return a - b;
}
int multi(int a , int b)
{
    return a * b;
}
int division(int a , int b)
{
    return a / b;
}
int mod(int a , int b)
{
    return a % b;
}
int initial()
{   int choice ;
    int fno;
    int sno;
    int ans ;
    printf("Press 1 for + \nPress 2 for -\nPress 3 for *\nPress 4 for / \nPress 5 for %\nPress 0 for the exit\n\nEnter your choice: ");
    scanf("%d",&choice);
    if(choice==0)
    {
        return 0;    
    }
    printf("Enter your first number: ");
    scanf("%d",&fno);
    printf("Enter your second number: ");
    scanf("%d",&sno);
    if(choice==0)
    {
        return 0;    
    }
    if(choice==1)
    {
        ans = add(fno,sno);
        printf("addition of %d and %d is %d\n\n",fno,sno,ans);
    }
    else if(choice==2)
    {
        ans = sub(fno,sno);
        printf("substration of %d and %d is %d\n\n",fno,sno,ans);
    }
    else if(choice==3)
    {
        ans = multi(fno,sno);
        printf("multiplication of %d and %d is %d\n\n",fno,sno,ans);
    }
    else if(choice==4)
    {
        ans = division(fno,sno);
        printf("division of %d and %d is %d\n\n",fno,sno,ans);
    }
    else if(choice==5)
    {
        ans = mod(fno,sno);
        printf("modulo of %d and %d is %d\n\n",fno,sno,ans);
    }
    else
    {
        
    }
    initial();
    
}
int main() {
    initial();
    return 0;
}
