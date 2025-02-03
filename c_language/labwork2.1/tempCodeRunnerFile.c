#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Enter number: ");
    scanf("%d", &a);
    b = a * a;

    printf("---------\n");
    printf("|       |\n");
    printf("| %d X %d = %d |\n", a, a, b);
    printf("|       |\n");
    printf("---------\n");

    return 0;
}
