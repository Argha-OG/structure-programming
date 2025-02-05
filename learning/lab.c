#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("Character: %c, ASCII value: %d\n", c, c);

    getchar();
    getchar();
}