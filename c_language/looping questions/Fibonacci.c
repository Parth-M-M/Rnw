#include <stdio.h>

int main() {
    int j ;
     printf("enter number :- ");
     scanf("%d",&j);
      int a = 0;
      int b = 1;
   for(int i = 0;i <=j;i++)
   {
       int c = a + b ;
       printf("%d ",c);
       a = b;
       b = c;
   }

    return 0;
}
