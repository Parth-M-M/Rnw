#include <stdio.h>
int strcnt(char a[])
{       int cnt = 0;
    
    for(int i=0;i<100;i++)
    {
        int cvt = a[i];
        if (cvt>=65&&cvt<=122)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    printf("length is : %d",cnt);
}
int main() {
    char n[100] ;
    printf("Enter string :");
    scanf("%99s",n);
    strcnt(n);

    return 0;
}
