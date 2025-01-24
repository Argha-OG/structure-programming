#include <stdio.h>

int main() {
    int x, y, sum, product, difference;

    // Input
    scanf("%d %d", &x, &y);

    // Calculate
    sum = x + y;
    product = x * y;
    difference = x - y;

    // Output
    printf("%d + %d = %d\n", x, y, sum);
    printf("%d * %d = %d\n", x, y, product);
    printf("%d - %d = %d\n", x, y, difference);

    return 0;
}