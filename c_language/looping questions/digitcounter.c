#include <stdio.h>

int main() {
        int num ,cnt=1; 
        
        printf("Enter number to count the digit in the intigers:- ");
        
        scanf("%d",&num);
        
        while (num>=10)
        {
            num = num / 10 ; // removes last digit one by one until single digit remains
           cnt++;    //counts how many times digit is removed
        } 
        printf("There are %d digit in this number",cnt);
        
        
    return 0;
}


