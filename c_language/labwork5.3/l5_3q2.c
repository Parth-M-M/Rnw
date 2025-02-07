#include <stdio.h>

int main() 
{

  int number;
  int choice;
  printf("press 1 for english\n");
  printf("press 2 for Hindi\n");
  printf("press 3 for Gujarati\n");
  scanf("%d", &number);

  switch(number) 
  {
    case 1:
    printf("press 1 for Internet recharge\n");
    printf("press 2 for Top-up recharge\n");
    printf("press 3 for Special recharge\n");
    scanf("%d", &choice);
    switch(choice)
    
                 {
                     case 1:
                     printf("you have successfully done recharge ");
                     break;

                     case 2:
                     printf("you have successfully done top-up recharge ");
                     break;

                     case 3:
                     printf("you have successfully done special recharge ");
                     break;
                     default:
                     printf("Invalid Number");
                     ;
                     
                 }
    break;
    
    case 2:
    printf("internet recharge ke liye 1 dabaye\n");
    printf("top-up recharge ke liye 2 dabaye\n");
    printf("vishesh recharge ke liye 3 dabaye\n");
    scanf("%d", &choice);
    switch(choice) 
                 {
                     case 1:
                     printf("aapane recharge kar diya hai ");
                     break;

                     case 2:
                     printf("aapane top-ap recharge kar diya hai ");
                     break;

                     case 3:
                     printf("aapane vishesh recharge kar diya hai ");
                     break;
                     default:
                     printf("Invalid Number");
                     ;
                     
                 }
    break;
    case 3:
    printf("internet recharge mate 1 dabavo\n");
    printf("top - up recharge mate 2 dabavo\n");
    printf("khas recharge mate 3 dabavo\n");
    scanf("%d", &choice);
    switch(choice) 
                 {
                     case 1:
                     printf("tame saphalta purvak recharge karyu che ");
                     break;

                     case 2:
                     printf("tame saphalta purvak top-up recharge karyu che ");
                     break;

                     case 3:
                     printf("tame saphalta purvak khas recharge karyu che");
                     break;
                     default:
                     printf("Invalid Number");
                     ;
                     
                 }
    break;
    default:
    printf("Invalid Number");
  }
return 0;
}

