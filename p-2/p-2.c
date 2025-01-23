#include <stdio.h>

int main() {
    int i;
    long long ll;
    char c;
    float f;
    double d;

    // Taking input for all variables
    scanf("%d %lld %c %f %lf", &i, &ll, &c, &f, &d);

    // Printing each value on a new line
    printf("%d\n", i);
    printf("%lld\n", ll);
    printf("%c\n", c);
    printf("%.2f\n", f); // Floating point number with 2 decimal precision
    printf("%.1lf\n", d); // Double with 1 decimal precision 

    return 0;
}