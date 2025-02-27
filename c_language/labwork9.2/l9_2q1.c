#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() 
{
    char str[100];
    printf("Create your password: ");
    scanf("%99s", str);
    int cnt = strlen(str);
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    if (cnt >= 6) 
    {
        for (int i = 0; i < cnt; i++) 
        {
            if (isupper(str[i])) 
            {
                hasUpper = 1;
            }
            if (islower(str[i])) 
            {
                hasLower = 1;
            }
            if (isdigit(str[i])) 
            {
                hasDigit = 1;
            }
            if (strchr("!@#$%^&*()-_=+[]{}|;:'\",.<>?/`~", str[i]))
            {
                hasSpecial = 1;
            }
        }

        if (hasUpper && hasLower && hasDigit && hasSpecial)
        {
            printf("Strong password\n");
        } 
        else 
        {
            printf("Weak password. Make sure it contains:\n");
            if (!hasUpper) 
            {
            printf("- At least one uppercase letter\n");
            }
            if (!hasLower) 
            {
            printf("- At least one lowercase letter\n");
            }
            if (!hasDigit) 
            {
            printf("- At least one digit\n");
            }
            if (!hasSpecial) 
            {
            printf("- At least one special character\n");
            }
        }
    }
    else 
    {
        printf("Weak password. It must be at least 6 characters long.\n");
    }

    return 0;
}

