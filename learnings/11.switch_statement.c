// Switch Statement
// Switch statement is used to execute a block of code based on the value of an expression. Here is the syntax of switch statement in C programming,


// switch(expression) {
//     case constant-expression 1:
//         statement(s);
//         break;
//     case constant-expression 2:
//         statement(s);
//         break;
//   default:

// Example:
#include <stdio.h>
int main() {


    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("Sunday\n");
            break;

        case 2:
            printf("Monday\n");
            break;

        case 3:
            printf("Tuesday\n");
            break;
        
        case 4:
            printf("Wednesday\n");
            break;

        case 5:
            printf("Thursday\n");
            break;

        case 6:
            printf("Friday\n");
            break;
            
        case 7:
            printf("Saturday\n");
            break;

            
        default:
            printf("Invalid Number\n");
    }
}


// Swich with multiple cases
#include <stdio.h>
int main() {

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days\n");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
            break;

        case 2:
            printf("28/29 days\n");
            break;

        default:
            printf("Invalid Number\n");
    }
}