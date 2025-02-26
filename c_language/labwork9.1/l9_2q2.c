#include <stdio.h>
#include <ctype.h>

int main() {
    char str[20];
    char upstr[20];

    printf("Enter a word: ");
     scanf("%[^\n]", str);
    for(int i=0;i<=20;i++)
    {
        upstr[i]=tolower(str[i]);
    }
    printf("%s",upstr);
    

    return 0;
}



