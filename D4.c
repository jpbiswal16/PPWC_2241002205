// Write a program to generate the multiplication table for a given number as follows
// Enter the number > 8
// +-----------------------------------------+
// | 8 16 24 32 40 48 56 64 72 80 |
// | 1 2 3 4 5 6 7 8 9 10 |
// | 8 8 8 8 8 8 8 8 8 8 |
// +-----------------------------------------+

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number > ");
    scanf("%d", &num);

    printf("+-----------------------------------------+\n");
    
    // Print the multiplication results
    printf("| ");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", num * i);
    }
    printf("|\n");

    // Print the numbers 1 to 10
    printf("| ");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("|\n");

    // Print the input number 10 times
    printf("| ");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", num);
    }
    printf("|\n");

    printf("+-----------------------------------------+\n");

    return 0;
}
