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
          (k==1)?printf("-"):printf("|");
          k = (k == 1) ? 0 : 1;
      }
       
       else
       {
       	printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}


