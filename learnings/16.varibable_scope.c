// Variable Scope in C
// The scope of a variable refers to the visibility of the variable in the program. In C programming, the scope of a variable is
// determined by where the variable is declared. The scope of a variable extends from the point where it is declared to the end of
// the block in which it is declared. In C, a block is a set of statements enclosed within curly braces { }.

// There are three types of variable scope in C programming:
// Local Variables
// Global Variables
// Formal Parameters

// Local Variables
// A variable that is declared inside a function or block is known as a local variable. The scope of a local variable is limited to
// the block in which it is declared. A local variable must be declared at the beginning of a block.

// Example:
#include <stdio.h>

int main() {
    int x = 10; // local variable to main function

    if (x == 10) {
        int y = 20; // local variable to if block
        printf("x and y: %d, %d\n", x, y);
    }

    // y is not accessible here because it's declared inside if block
    printf("x: %d\n", x);

    return 0;
}

// Global Variables
// A variable that is declared outside of all functions is known as a global variable. A global variable is accessible from any
// function in the program. The scope of a global variable is the entire program.

// Example:
#include <stdio.h>

int x = 10; // global variable

int main() {
    printf("x: %d\n", x); // x is accessible here

    return 0;
}

// Formal Parameters
// Formal parameters are the parameters that are listed in the function declaration. They act as placeholders for the actual values
// that are passed to the function when it is called. The scope of a formal parameter is limited to the function in which it is
// declared.

// Example:
#include <stdio.h>

void add(int a, int b) {
    int sum = a + b; // sum is a local variable to add function
    printf("Sum: %d\n", sum);
}
