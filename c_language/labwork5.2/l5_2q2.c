#include <stdio.h>

int main()
{ int a,b,c,d ;
    printf("Enter First number ");
    
    scanf("%d",&a);
    
    printf("Enter second  number ");
    
    scanf("%d",&b);
    
    printf("Enter third number ");
    
    scanf("%d",&c);
    
    printf("Enter forth number ");
    
    scanf("%d",&d);
    
    
    
    // if (a>b)
    // {
    //     if (a>c)
    //     {
    //         if (a>d)
    //         {
    //             printf("%d is the maximum number",a);
    //         }
    //         else 
    //         {
    //             printf("Error 1 ");
    //         }
    //     }
    //     else if(c>d)
    //     {
    //         printf("%d is the maximum number",c); 
    //     }
    //     else
    //     {
    //         printf("%d is the maximum number",d);
    //     }
    // }
    // else if (b>c)
    // {
    //       if (b>d)
    //       {
    //          printf("%d is the maximum number",b);  
    //       }
    //       else 
    //         {
    //             printf("Error 2 ");
    //         }
    // }
    // else if (c>a)
    // {
    //     if (c>d)
    //     {
    //       printf("%d is the maximum number",c); 
    //     }
    //     else 
    //         {
    //             printf("%d is the maximum number",d);
    //         }
    // }
    // else 
    // {
    //   printf("%d is the maximum number",d); 
    // }
    
       if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("%d is the maximum number",a);
            }
            else
            {
                printf("%d is the maximum number",d);
            }
            
        }
       else 
       {
           if (c>d)
           {
             printf("%d is the maximum number",c);  
           }
           else 
           {
               printf("%d is the maximum number",d);
           } 
       }
    }
    else
    {
      if (b>c)
      {
         if (b>d)
         {
             printf("%d is the maximum number",b);
         }
         else 
         {
             printf("%d is the maximum number",d);
         }
      }
      else
      {
       if(c>a)
       {
           if (c>d)
           {
             printf("%d is the maximum number",c);  
           }
           else 
           {
               printf("%d is the maximum number",d);
           }
       }
       
      }
    }
    return 0;
}

