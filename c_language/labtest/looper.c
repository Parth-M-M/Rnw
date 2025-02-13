#include <stdio.h>
int main() {
    
    int i=97 ; // a according to ASCII chart
    
    do
    { 
	 printf("%c,",i);  
	 
        i = i + 4 ;  // create a gap of 3 between alphabets
        
    }while(i<=122);   // do - while loop for alphabets

    return 0;
}



----------------------------------------------------------------------------------



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






----------------------------------------------------------------------------------


#include <stdio.h>

int main() 
{
	
        int num , sum , firstdigit , lastdigit;
        
        printf("Enter number you want first and last digit sum :- ");
        
        scanf("%d",&num);
        
        lastdigit = num %10 ; // Extract the last digit of the intiger
        
        while (num>=10)
        {
            num = num / 10 ;
            
        } // removing last digit until only first digit remains 
        
        firstdigit=num;
        
        sum = firstdigit+lastdigit; // adding first and last digit 
        
        printf("%d",sum);
        
        
    return 0;
}





-----------------------------------------------------------------------------------





