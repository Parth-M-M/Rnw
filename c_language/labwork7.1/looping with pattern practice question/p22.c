#include <stdio.h>


int main() 
{
  int i,j,k=65;
 
  // Outer loop
  for (i = 1; i <=5; i++)
  {
    // Inner loop
      for (j = 1; j <= 5; j++)
       if(j<=i)
      {
         printf("%c",k);
         k++;
      }
       
       else
       {
       	printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}


