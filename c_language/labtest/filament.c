#include <stdio.h>
int main() {
    char str[100];
    char reverser[100];
    char revcnt[100];
    int cnt = 0;
    printf("Enter your string : ");
    scanf("%99s",str);
    for(int i=0;i<100;i++)
    {
        int cvt = str[i];
        if (cvt>=65&&cvt<=122)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    int temp = 0;
    for(int i = cnt;i>=0;i--)
    {   
        reverser[i]=str[temp];
        temp++;
    }
    for (int i = 0; i < cnt; i++) 
    {
        reverser[i] = str[cnt - i - 1];
    }
    reverser[cnt] = '\0';
    for (int i=0;i<cnt;i++)
    {    int a = str[i];
         int b = reverser[i];
         int c = a-b;
        if(c==0)
        {
            printf("it is a Palindrome\n");
            break;
        }
        else
        {
            printf("it is not a Palindrome\n");
            break;
        }
    }
    return 0;
}
