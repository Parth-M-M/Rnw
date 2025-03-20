#include <stdio.h>

int main() {
    char alpha ;
    printf("Enter character: ");
    scanf("%c",&alpha);
    if (alpha>='A'&&alpha<='Z'||alpha>='a'&&alpha<='z')
    {
    switch(alpha)
    {
        case 'a':
        printf("%c is a vowel/porositive",alpha);
        break;
        case 'e':
        printf("%c is a vowel/porositive",alpha);
        break;
        case 'i':
        printf("%c is a vowel/porositive",alpha);
        break;
        case 'o':
        printf("%c is a vowel/porositive",alpha);
        break;
        case 'u':
        printf("%c is a vowel/porositive",alpha);
        break;
        case 'A':
        printf("%c is a vowel/porositive",alpha);
        break;
        case 'E':
        printf("%c is a vowel/porositive",alpha);
        break;
        case 'I':
        printf("%c is a vowel/porositive",alpha);
        break;
        case 'O':
        printf("%c is a vowel/porositive",alpha);
        break;
        case 'U':
        printf("%c is a vowel/porositive",alpha);
        break;
        default:
        printf("%c is a consonant",alpha);
        break;
        }
    }
    else 
    {
        printf("Invalid input please try again ");
    }
    return 0;
}









-----------------------------------------------------------------------------------









#include <stdio.h>

int main() {
    int a;
    printf("Enter array size :");
    scanf("%d",&a);
    int arr[a];
    int ans = 2147483647;
    for(int i =0 ; i < a;i++)
    {
        printf("[%d] : ",i);
        scanf("%d",&arr[i]);
        if (ans >=arr[i])
        ans = arr[i];
    }
    printf("%d is the smallest element in your array ",ans);

    return 0;
}




-----------------------------------------------------------------------------------






#include <stdio.h>

int main() {
    int og, rev = 0;
    printf("Enter Three Digit Number: ");
    scanf("%d", &og);

    if (og < 100 || og > 999) 
	{
        printf("Error: Not a three-digit number");
        return 0;
    }

    int temp = og;

    while (temp != 0) {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    printf("Reversed Number: %d", rev);
    return 0;
}





-----------------------------------------------------------------------------------





#include <stdio.h>

int main() {
    int *ptr;
    int a;
    printf("Enter Array Size: ");
    scanf("%d", &a);
    int arr[a];
    ptr = arr;
    for (int i = 0; i < a; i++) 
	{
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++) 
	{
        *(ptr + i) = (*(ptr + i)) * (*(ptr + i)); 
    }
    for (int i = 0; i < a; i++) 
	{
        printf("square of each element %d = %d\n", i, *(ptr + i));
    }

    return 0;
}





-----------------------------------------------------------------------------------






#include <stdio.h>

struct House {
    int room_quantity;
    int established_year;
    char city[50];
    int price;
};

int main() {
    int N, i;

   
    printf("Enter the number of houses: ");
    scanf("%d", &N);

    
    struct House houses[N];

    for (i = 0; i < N; i++) 
	{
        printf("\nEnter details for house %d:\n", i + 1);
        
        printf("Number of rooms: ");
        scanf("%d", &houses[i].room_quantity);
        
        printf("Established year: ");
        scanf("%d", &houses[i].established_year);
        
        printf("City: ");
        scanf(" %[^\n]s", houses[i].city);
        
        printf("price of the house: ");
        scanf("%d", &houses[i].price);
    }

    
    printf("\n--- House Details ---\n");
    for (i = 0; i < N; i++) 
	{
        printf("\nHouse %d:\n", i + 1);
        printf("Rooms: %d\n", houses[i].room_quantity);
        printf("Established Year: %d\n", houses[i].established_year);
        printf("City: %s\n", houses[i].city);
        printf("price: %d\n", houses[i].price);
    }

    return 0;
}





-----------------------------------------------------------------------------------





#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *employee;
    int n, i;
    char name[100], role[100];

    employee = fopen("data.txt", "w");
    if (employee == NULL) 
	{
        printf("Error opening employee!\n");
        return 1;
    }

    printf("Enter the number of employees: ");
    scanf("%d", &n);
    getchar(); 

   
    for (i = 0; i < n; i++) 
	{
        printf("\nEnter name of employee %d\n : ", i + 1);
        fgets(name, sizeof(name), stdin);
        
        name[strcspn(name, "\n")] = 0;

        printf("Enter designation of employee %d: ", i + 1);
        fgets(role, sizeof(role), stdin);
        role[strcspn(role, "\n")] = 0;

        fprintf(employee, "Name: %s, Role: %s\n", name, role);
    }

    printf("\nData successfully written to data.txt\n");

    fclose(employee);

    return 0;
}






-----------------------------------------------------------------------------------




#include <stdio.h>

int main() 
{
  int i,j;
  int a = 10;
  for (i = 1; i <=5; i++)
  {
    
      for (j = 1; j <= 5; j++)
      {
       if(j <=i)
       {
        printf("%d ", a*a );
        
       }
       else
       {
       	printf(" ");
       }
       
      }
      a--;
      printf("\n");
      
  }
 
  return 0;
}





