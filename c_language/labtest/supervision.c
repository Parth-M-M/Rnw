#include <stdio.h>

int main()
{
    FILE *even, *odd;
    odd = fopen("odd.txt", "w");
    even = fopen("even.txt", "w");
    
    if (odd == NULL || even == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(even, "%d\n", i);
        }
        else
        {
            fprintf(odd, "%d\n", i);
        }
    }

    fclose(odd);
    fclose(even);

    printf("Numbers written successfully.\n");

    return 0;
}




-----------------------------------------------------------------------------------




#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() {
    struct Student students[5];
    int i, total;
    float percentage;

    
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        getchar(); 
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);

        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);

        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);
    }

    
    printf("\n----- Mark Sheet -----\n");
    for (i = 0; i < 5; i++) {
        total = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        percentage = (float)total / 3.0;

        printf("\n%s (%d)\n", students[i].name, students[i].roll_no);
        printf("Chemistry => %d\n", students[i].chem_marks);
        printf("Mathematics => %d\n", students[i].maths_marks);
        printf("Physics => %d\n", students[i].phy_marks);
        printf("Total => %d/300\n", total);
        printf("Percent => %.2f%%\n", percentage);
    }

    return 0;
}



-----------------------------------------------------------------------------------
