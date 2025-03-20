#include <stdio.h>

int main()
{
    FILE *ans;
    ans = fopen("answers.txt", "w");
    if (ans == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    for (int i = 0; i <= 50; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            fprintf(ans, "%d\n", i);
        }
    }

    fclose(ans);
    return 0;
}

