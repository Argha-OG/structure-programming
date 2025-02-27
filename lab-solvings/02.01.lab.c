#include <stdio.h>

int main() {

    int x, y, add, subtract, multiply, divide;
    
    
    printf("enter first number: ");
    scanf("%d", &x);
    printf("enter second number: ");
    scanf("%d", &y); 
    
    add = x + y;
    subtract = x - y;
    multiply = x * y;
    divide = x / y;

    printf("\n\n\nAdd: %d\n", add);
    printf("subtract: %d\n", subtract);
    printf("multiply: %d\n", multiply);
    printf("Devide: %d\n", divide);

    return 0;
}