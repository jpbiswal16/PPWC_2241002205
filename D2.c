// Write a c program to replace 0 and 1 in a number

#include <stdio.h>
#include <string.h>

void replace_0_and_1(char *number) {
    for (int i = 0; i < strlen(number); i++) {
        if (number[i] == '0') {
            number[i] = '1';
        } else if (number[i] == '1') {
            number[i] = '0';
        }
    }
}

int main() {
    char number[100];

    printf("Enter a binary number: ");
    scanf("%s", number);

    replace_0_and_1(number);

    printf("Modified number: %s\n", number);

    return 0;
}
