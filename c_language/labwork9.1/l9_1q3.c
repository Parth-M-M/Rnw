#include <stdio.h>
#include <ctype.h>

int main() {
    char str[20];
    char upstr[20];

    printf("Enter a word: ");
    scanf("%[^\n]", str); 

    for (int i = 0; i < 20 && str[i] != '\0'; i++) 
    {  
        if (isupper(str[i]))
        {
            upstr[i] = tolower(str[i]);
        } 
        else if (islower(str[i])) 
        {
            upstr[i] = toupper(str[i]);
        } 
        else
        {
            upstr[i] = str[i];  
        }
    }

    

    printf("Modified word: %s\n", upstr);

    return 0;
}

