#include <stdio.h>
#include <string.h>

int main() 
{
    char id[100] = "helloworld@gmail.com";
    char pass[100] = "1324354657687980";
    char lid[100];
    char lpass[100];

    printf("Enter your login ID: ");
    scanf("%99s", lid);
    printf("Enter your login password: ");
    scanf("%99s", lpass);
    if (strcmp(id, lid) == 0 && strcmp(pass, lpass) == 0)
    {
        printf("Login successful");
    }
    else 
    {
        printf("Login unsuccessful (ID or password incorrect)");
    }
    
    return 0;
}

