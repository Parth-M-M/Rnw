#include <stdio.h>

int main() {
            int num,og_num,reminder ,result=0;
            printf("Enter three digit number :- ");
            scanf("%d",&num);
            og_num = num;
            while(og_num!=0)
            {
                reminder = og_num % 10; 
                // Extracts the last digit of originalNum using modulo (%) operation.
                
                result+=reminder*reminder*reminder;
                //Computes the cube of the extracted digit and adds it to result.
                og_num/=10;
                //Removes the last digit from originalNum by dividing it by 10.
 
                
            }
            if (result == num)
            {
                printf("%d is an Armstrong number.", num);
            }
            else
            {
                printf("%d is not an Armstrong number.", num);
            }
    return 0;
}
