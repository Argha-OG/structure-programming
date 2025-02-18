// While Loop
// The while loop is used to iterate a part of the program several times. If the number of iteration is not fixed, it is recommended to use while loop.
//
// The syntax of while loop is:
//
// while (condition) {
//     statement(s);
// }
// Here, condition is a boolean expression. If the condition is true, the body of the loop is executed. When the condition becomes false, the loop terminates which marks the end of its life cycle.
//
// Example:
#include <stdio.h>
int main() {
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
// In the above example, the loop will iterate until the value of i is less than or equal to 5. The output of the program will be:

// Creating Multiplication Table using while loop
#include <stdio.h>
int main() {
    int i = 1, number;
    printf("Enter a number: \n");
    scanf("%d", &number);
    while (i <= 10) {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }
    return 0;
}

