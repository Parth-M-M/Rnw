#include <stdio.h>
#include <stdbool.h>

int main() 
{
  int i,j;
  bool k = 1;
  // Outer loop
  for (i = 1; i <=5; i++)
  {
    // Inner loop
      for (j = 1; j <= 5; j++)
       if(j<=i)
      {     
            if (j%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
         
         
      }
       
       else
       {
       	printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}


