#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);  
    str[strcspn(str, "\n")] = '\0';
    char *ptr = str;
    int cnt = 0;
    for (int i = 0; ptr[i] != '\0'; i++) 
    {  
        printf("%c", ptr[i]);
        if ((ptr[i] >= 'A' && ptr[i] <= 'Z') || 
            (ptr[i] >= 'a' && ptr[i] <= 'z') || 
            (ptr[i] == ' ')) 
            {
            cnt++;
            }
    }

    printf("\nThe length of string is : %d\n", cnt);
    return 0;
}








-----------------------------------------------------------------------------------


















#include <stdio.h>

void arsize(int a)
{
    int ar[a][a];    
    int cube[a][a]; 

    int *p_ar = &ar[0][0];
    int *p_cu = &cube[0][0];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("Enter value at [%d][%d]: ", i, j);
            scanf("%d", (p_ar + i * a + j));

            *(p_cu + i * a + j) = (*(p_ar + i * a + j)) *(*(p_ar + i * a + j)) * (*(p_ar + i * a + j));
        }
    }

    printf("\nCube of all elements\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%4d ", *(p_cu + i * a + j));
        }
        printf("\n");
    }
}

int main()
{
    int b;
    printf("Enter array size: ");
    scanf("%d", &b);
    arsize(b);
    return 0;
}


















-----------------------------------------------------------------------------------
