#include <stdio.h>

int main() {
   int a;
   printf("Enter number;- ");
   scanf("%d",&a);
   int b = 0;
   for(int i = 1;i<=a;i++)
   {    int c = b + i ;
         b = c ;
       if(i==a)
       {
           printf("The sum of all numbers is %d",c);
       }
       else
       {
           
       }
   }
    return 0;
}
