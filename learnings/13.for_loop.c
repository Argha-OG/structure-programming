// For Loop in C
// The for loop is used to iterate a part of the program several times. If the number of iteration is fixed, it is recommended to use for loop.
//
// The syntax of for loop is:
//
// for (initialization; condition; increment/decrement) {
//     statement(s);
// }
// Here, initialization is executed only once. Then, the condition is evaluated. If the condition is true, the body of the loop is executed. After the body of the loop is executed, the increment/decrement statement is executed. The condition is evaluated again. This process continues until the condition is false.
//
// Example: 
#include <stdio.h>
int main() {
    
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

// Sum of 1 to 100 using for loop
#include <stdio.h>
int main() {

    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("Sum = %d\n", sum);
    return 0;
}

// Sum of even numbers between 1 to 100 using for loop
#include <stdio.h>
int main() {

    int sum = 0;
    for (int i = 2; i <= 100; i+2) {
        sum += i;
    }
    printf("Sum = %d\n", sum);
    return 0;
}