#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c

    printf("Character: %c\n", ch);
    printf("ASCII value: %d\n", ch);

    return 1;
}

