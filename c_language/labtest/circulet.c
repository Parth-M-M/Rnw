#include <stdio.h>

int main() {
    int i,j;
        for(i=1;i<=5;i++)
        {   
            for(j=1;j<=5;j++)
                {
                        if(j <= i)
                        {
                            printf(" %d ",40+j);
                        }
                        else
                        {
                            printf(" ");
                        }
                }   
                printf("\n");

        }
    return 0;
}




-----------------------------------------------------------------------------------




#include <stdio.h>

int main() {
    int i,j,cnt=11;
        for(i=1;i<=4;i++)
        {   
            for(j=1;j<=5;j++)
                {
                        if(j <= i)
                        {
                            printf(" %d ", cnt );
                            cnt++;
                        }
                        else
                        {
                            printf(" ");
                        }
                }   
                printf("\n");

        }
    return 0;
}



-----------------------------------------------------------------------------------




#include <stdio.h>

int main() {
    int i,j;
        for(i=1;i<=5;i++)
        {   
            for(j=1;j<=5;j++)
                {
                        if(j >= 6-i)
                        {
                            printf("%d",j );
                            
                        }
                        else
                        {
                            printf(" ");
                        }
                }   
                printf("\n");

        }
    return 0;
}





-----------------------------------------------------------------------------------



#include <stdio.h>

int main() {
    int i,j;
        for(i=1;i<=5;i++)
        {  int cnt=1;
            for(j=1;j<=5;j++)
                {
                        if(j >= i)
                        {
                            printf("%d",cnt);
                            (cnt==1)?cnt--:cnt++;
                        }
                        else
                        {
                            printf(" ");
                        }
                }   
                printf("\n");

        }
    return 0;
}



-----------------------------------------------------------------------------------



#include <stdio.h>

int main() {
    int i,j,k;
        for(i=1;i<=5;i++)
        {    k = 6 - i;
            for(j=1;j<=9;j++)
                {
                        if(j>=6-i&&j<=4+i)
                        {
                            printf("%d",k);
                            j<5?k++:k--;
                        }
                        else
                        {
                            printf(" ");
                        }
                }   
                printf("\n");

        }
    return 0;
}



-----------------------------------------------------------------------------------




#include <stdio.h>

int main() {
    int i,j ;
       
        for(i=1;i<=5;i++)
        {  int k = 1;
            for(j=1;j<=9;j++)
                {  
                        if(j<=i||j >=10-i)
                        { 
                             printf("%d", k);
                             j < 5 ? k++ : k--;
                        }
                        else
                        {
                            printf(" ");
                            if (j == 5) k--;
                        }
                }   
                printf("\n");

        }
    return 0;
}




-----------------------------------------------------------------------------------




#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    { 
        for(j=1;j<=5;j++)
        {  
            if(j==1||j==2||j==3||j==4||j==5)
            {  
           
                if((i==1&&j==5||i==2&&j==2||i==2&&j==3||i==2&&j==4||i==3&&j==2||i==3&&j==3||i==3&&j==4||i==5&&j==2||i==5&&j==3||i==5&&j==4||i==5&&j==5||i==6&&j==2||i==6&&j==3||i==6&&j==4||i==6&&j==5||i==7&&j==2||i==7&&j==3||i==7&&j==4||i==7&&j==5||i==4&&j==5))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}




-----------------------------------------------------------------------------------


