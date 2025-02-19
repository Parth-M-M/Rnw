#include <stdio.h>

int main() 
{
  int i,j,k = 0;
  // Outer loop
  for (i=1;i<=9; i++)
  { int l = 1;
    
    i<=5?k++:k--;
    for (j=1;j<=9;j++)
      {
       if(j<=6-k || j>=4+k)
      {
      	   printf("%d",l);
      	    j<5?l++:l--;
      }
       else
       {
           printf(" ");
          if(j==5)l--;  
      }
      }
      printf("\n");
      
  }
 
  return 0;
}
