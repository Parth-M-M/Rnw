#include <stdio.h>

int main() {
   int a;
   printf("Enter number;- ");
   scanf("%d",&a);
   int b = 1;
   for(int i = a;i>=1;i--)
   { int c = b*i;
       b = c ;
       
       if(i==1)
       {
            printf(" %d ",c );    
       }
      
   }
   
   
    return 0;
}
