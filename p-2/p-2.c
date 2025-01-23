#include <stdio.h>

int main() {
    int integer;
    long long longInteger;
    char character;
    float floatingPoint;
    double doublePrecision;

    scanf("%d %lld %c %f %lf", &integer, &longInteger, &character, &floatingPoint, &doublePrecision);

    printf("%d\n", integer);
    printf("%lld\n", longInteger);
    printf("%c\n", character);
    printf("%f\n", floatingPoint);
    printf("%lf\n", doublePrecision);

    return 0;
}