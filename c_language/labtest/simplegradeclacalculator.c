#include <stdio.h>

int main() {
     int a ; 
     printf ("Enter Your Marks :- ");
     scanf("%d",&a);
     char grade ;
    
    grade = (a>=1&&a<=30)? 'F':
    (a>=31&&a<=50)? 'D':
    (a>=51&&a<=70)? 'C':
    (a>=71&&a<=80)? 'B':
    (a>=81&&a<=100)?'A':printf("invalid input...");
    (a>=1&&a<=100)?printf("Your Grade is %c. ",grade):printf("invalid input...");
    // printf("Your Grade is %c",grade);
    switch(grade)
    {
        case 'F' :
        printf("Sorry,You Failed ");
        break; 
        case 'D' :
        printf("You passed, but you could do better");
        break;
        case 'C' :
        printf("Good job");
        break;
        case 'B' :
        printf("Well done");
        break;
        case 'A' :
        printf("Excellent Work!");
        break;
        default:
        printf("invalid Input...");
        break;
        
    }
    if (grade== 'A' ||grade== 'B' ||grade== 'C'||grade== 'D')
    {
        printf(" Congratulations! You are eligible for next level");
    }
    else if (grade== 'F')
    {
        printf("Please try again next time");
    }
    else 
    {
        printf("invalid Input...");
    }
    return 0;
}
