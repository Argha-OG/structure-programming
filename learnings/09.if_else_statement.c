// if else statement
// if else statement is used to execute a block of code if the condition is true and another block of code if the condition is false.
// Syntax:
// if (condition) {
//     // block of code to be executed if the condition is true
// } else {
//     // block of code to be executed if the condition is false
// }

// 1. if else Statement
// 2. else if Statement

// 1. if else Statement
// Example 1:
#include <stdio.h>
int main() {

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}

// 2. else if Statement
// Example 2:
#include <stdio.h>
int main() {

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 100){
        printf("Invalid age.\n");
    }else if (age < 0) {
        printf("invalid age.\n");
    }else if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else if (age >= 13) {
        printf("You are a teenager.\n");
    } else {
        printf("You are a child.\n");
    }

    return 0;
}




