#include <stdio.h>

// Define the structure for Employee
struct Employee {
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    getchar(); // Consume newline
    
    struct Employee employees[n];
    
    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);
        getchar(); // Consume newline
        
        printf("Name: ");
        fgets(employees[i].emp_name, sizeof(employees[i].emp_name), stdin);
        
        printf("Age: ");
        scanf("%d", &employees[i].emp_age);
        getchar(); // Consume newline
        
        printf("Role: ");
        fgets(employees[i].emp_role, sizeof(employees[i].emp_role), stdin);
        
        printf("City: ");
        fgets(employees[i].emp_city, sizeof(employees[i].emp_city), stdin);
        
        printf("Experience (years): ");
        scanf("%d", &employees[i].emp_experience);
        getchar(); // Consume newline
        
        printf("Company Name: ");
        fgets(employees[i].emp_company_name, sizeof(employees[i].emp_company_name), stdin);
    }
    
    // Display employee details
    printf("\nEmployee Records:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].emp_id);
        printf("Name: %s", employees[i].emp_name);
        printf("Age: %d\n", employees[i].emp_age);
        printf("Role: %s", employees[i].emp_role);
        printf("City: %s", employees[i].emp_city);
        printf("Experience: %d years\n", employees[i].emp_experience);
        printf("Company Name: %s", employees[i].emp_company_name);
    }
    
    return 0;
}
