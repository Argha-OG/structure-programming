// Termary Operator
// The termary operator is a shorthand way of writing an if-else statement. It is also known as a conditional operator. The syntax of the termary operator is as follows:
// 
// Syntax:
// condition ? expression1 : expression2;
//
// The termary operator works as follows:
// If the condition is true, the expression1 is executed.
// If the condition is false, the expression2 is executed.


// Example 1:
#include <stdio.h>
int main() {

    int age=18;

    (age >= 18) ? printf("You are %d You are eligible to vote.\n", age) : printf("You are %d You are not eligible to vote.\n", age);
}

