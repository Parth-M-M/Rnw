#include <stdio.h>

int main()
{   float c ;
    printf("Enter temperature in celsius :- ");
    scanf("%f", &c);
    float f = (1.8*c)+ 32;
    printf("%.1f celsius temperature in Fahrenheit is :- %.1f ",c,f);
    return 0;
}




------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



#include <stdio.h>

int main()
{   float bs ; 
    int hra = 10 ;
    int da = 5 ;
    int ta = 8 ;
    float gs ;
    printf("Enter base Salary :- ");
    scanf("%f",&bs);
    float h = bs*0.01*hra;
    float d = bs*0.01*da;
    float t = bs*0.01*ta;
    gs = bs+h+d+t;
    printf("your Gross Salary is :- %.2f ",gs);

    return 0;
}






---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




#include <stdio.h>

int main()
{   float a;
    float b;
    float c; 
    printf("Enter first angle :- ");
    scanf("%f",&a);
    printf("Enter first angle :- ");
    scanf("%f",&b);
    float s = a +b ;
    c = 180 - s;
    printf("the third angle is :- %.2f degree ",c);
    return 0;
}




-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
