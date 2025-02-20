#include <stdio.h>


void generate_coordinates(int num1, int num2) {
    int x1 = num1 / 10;
    int y1 = num1 % 10;
    int x2 = num2 / 10;
    int y2 = num2 % 10;
    
   
    for (int x = x1; x <= x2; x++) {
        for (int y = y1; y <= y2; y++) {
            printf("%d,%d\n", x, y);
        }
    }
}

int main() {
    int num1, num2;
    
  
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
  
    generate_coordinates(num1, num2);
    
    return 0;
}

