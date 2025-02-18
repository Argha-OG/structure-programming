// Boolean Expressions And Comparison Operators
// Comparison Operator
// Greater Than Operator
// Less than Operator
// Equal to Operator
// Not Equal To Operator
// Greater Than or Equal Operator
// Comparison between variables
// Logical Operators in C
// AND Operator
// OR Operator
// NOT Operator 

// boolean expressions
// Example 1:
#include <stdio.h>
#include <stdbool.h>

int main () {
    bool a = true;
    bool b = false;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("a && b: %d\n", a && b); // AND Operator
    printf("a || b: %d\n", a || b); // OR Operator
    printf("!a: %d\n", !a); // NOT Operator
    printf("!b: %d\n", !b); // NOT Operator
    return 0;
}

// Comparison Operator
// Greater Than Operator >
// Less than Operator <
// Equal to Operator ==
// Not Equal To Operator !=
// Greater Than or Equal Operator >=
// Less Than or Equal Operator <=

// Example 2:
#include <stdio.h>
#include <stdbool.h>

int main() {

    bool a = 10;
    bool b = 5;

    printf("a = 10\nb = 5\n"); // Name of the variables
    printf("Greater: %d\n", a > b); // Greater Than Operator
    printf("Less: %d\n", a < b); // Less than Operator
    printf("Equal: %d\n", a == b); // Equal to Operator
    printf("Not Equal: %d\n", a != b); // Not Equal To Operator
    printf("Greater or Equal: %d\n", a >= b); // Greater Than or Equal Operator
    printf("Less or Equal: %d\n", a <= b); // Less Than or Equal Operator
    return 0;
}
