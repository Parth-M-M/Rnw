#include <stdio.h>
#include <string.h>

// Function to print a letter in star pattern
void printLetter(char letter, int row, int col) {
    switch(letter) {
        case 'A':
            if (row == 0 || row == 3 || col == 0 || col == 4)
                printf("*");
            else
                printf(" ");
            break;
        case 'B':
            if (col == 0 || (col == 3 && row != 0 && row != 4) || (row == 0 || row == 2 || row == 4) && col < 3)
                printf("*");
            else
                printf(" ");
            break;
        case 'C':
            if (col == 0 || row == 0 || row == 4)
                printf("*");
            else
                printf(" ");
            break;
        case 'D':
            if (col == 0 || (col == 3 && row != 0 && row != 4) || (row == 0 || row == 4) && col < 3)
                printf("*");
            else
                printf(" ");
            break;
        case 'E':
            if (col == 0 || row == 0 || row == 2 || row == 4)
                printf("*");
            else
                printf(" ");
            break;
        case 'F':
            if (col == 0 || row == 0 || row == 2)
                printf("*");
            else
                printf(" ");
            break;
        case 'G':
            if (col == 0 || row == 0 || row == 4 || (col == 3 && row >= 2) || (row == 2 && col >= 2))
                printf("*");
            else
                printf(" ");
            break;
        case 'H':
            if (col == 0 || col == 4 || row == 2)
                printf("*");
            else
                printf(" ");
            break;
        case 'I':
            if (col == 2 || row == 0 || row == 4)
                printf("*");
            else
                printf(" ");
            break;
        case 'J':
            if (row == 0 || col == 2 || (row == 4 && col < 3))
                printf("*");
            else
                printf(" ");
            break;
        case 'K':
            if (col == 0 || (row == 2 && col == 1) || (row == 1 && col == 2) || (row == 0 && col == 3) || (row == 3 && col == 2) || (row == 4 && col == 3))
                printf("*");
            else
                printf(" ");
            break;
        case 'L':
            if (col == 0 || row == 4)
                printf("*");
            else
                printf(" ");
            break;
        case 'M':
            if (col == 0 || col == 4 || (row == 1 && (col == 1 || col == 3)) || (row == 2 && col == 2))
                printf("*");
            else
                printf(" ");
            break;
        case 'N':
            if (col == 0 || col == 4 || row == col)
                printf("*");
            else
                printf(" ");
            break;
        case 'O':
            if (col == 0 || col == 4 || row == 0 || row == 4)
                printf("*");
            else
                printf(" ");
            break;
        case 'P':
            if (col == 0 || (row == 0 && col < 4) || (row == 2 && col < 4) || (col == 4 && row < 2))
                printf("*");
            else
                printf(" ");
            break;
        case 'Q':
            if (col == 0 || col == 4 || row == 0 || row == 4 || (row == 3 && col == 3) || (row == 4 && col == 2))
                printf("*");
            else
                printf(" ");
            break;
        case 'R':
            if (col == 0 || (row == 0 && col < 4) || (row == 2 && col < 4) || (col == 4 && (row == 1 || row == 3 || row == 4)))
                printf("*");
            else
                printf(" ");
            break;
        case 'T':
            if (row == 0 || col == 2)
                printf("*");
            else
                printf(" ");
            break;
        case 'W':
            if (col == 0 || col == 4 || (row == 3 && (col == 1 || col == 3)) || (row == 4 && col == 2))
                printf("*");
            else
                printf(" ");
            break;
        case 'X':
            if (row == col || row + col == 4)
                printf("*");
            else
                printf(" ");
            break;
        case 'Y':
            if ((row < 3 && (row == col || row + col == 4)) || (row >= 3 && col == 2))
                printf("*");
            else
                printf(" ");
            break;
        case 'Z':
            if (row == 0 || row == 4 || row + col == 4)
                printf("*");
            else
                printf(" ");
            break;
        default:
            printf(" ");
    }
}

// Function to print a word in star pattern
void printWordInStars(char word[]) {
    int length = strlen(word);
    for (int row = 0; row < 6; row++) {
        for (int i = 0; i < length; i++) {
            for (int col = 0; col < 5; col++) {
                printLetter(word[i], row, col);
            }
            printf("  "); // Space between letters
        }
        printf("\n");
    }
}

int main() {
    char word[20];
    printf("Enter a word (uppercase, max 20 characters): ");
    scanf("%s", word);
    printWordInStars(word);
    return 0;
}
