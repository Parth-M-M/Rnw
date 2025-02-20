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







