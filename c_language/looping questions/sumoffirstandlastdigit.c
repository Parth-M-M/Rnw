#include <stdio.h>

int main() {
        int num , sum = 0 , firstdigit , lastdigit ;
        printf("enter any number of which you \n want sum of first and last digit ");
        scanf("%d",&num);
        lastdigit = num % 10 ;
        firstdigit = num ; 
        while(num >= 10)
        {
            num = num / 10;
        }
        
        firstdigit = num ;
        sum = lastdigit + firstdigit;
        printf("the sum of first and last digit is %d",sum);
        
    return 0;
}
