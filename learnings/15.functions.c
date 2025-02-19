// Functions in C
// Learnings: Functions in C

// C Functions
// Syntax of Function
// Function Parameters
// Create a function with parameter
// Return Type
// Function Prototype
// Standard Library Function
// main Function

// C Functions
// A function is a block of code that performs a specific task. It has a name and it is reusable i.e. it can be executed
// from as many different parts in a C Program as required. In C, a function contains zero or more parameters and a block
// of code that performs a specific task. A function may or may not return a value.

// Syntax of Function
// The syntax of a function in C programming language is as follows:
// return_type function_name(parameters)
// {
//     // code to be executed
// }

// Example:
#include <stdio.h>
void greet() {
    printf("Hello World!\n");
}

int main() {

    greet();
    greet();
    printf("After function call\n");
    return 0;
}

// Function Parameters
// A function can have zero or more parameters. The parameters are optional; that is, a function may contain no parameters.
// The parameters are used to pass information or data to the function. The parameters must be separated by commas.

// Example:
#include <stdio.h>

void calculateSquare(int n){

    int square = n * n;
    printf("Square of %d is %d\n", n, square);
}

int main() {
        
    calculateSquare(5);

    return 0;
}

// Create a function with parameter
#include <stdio.h>

void add(int a, int b) {
    int sum = a + b;
    printf("Sum of %d and %d is %d\n", a, b, sum);
}

int main() {
    add(10, 20);
    add(20, 30);
    return 0;
}

// Return Type
// A function may or may not return a value. If a function returns a value, it must use the return statement to return the value.
// The return_type is the data type of the value the function returns. If a function does not return a value, the return_type is
// the keyword void.

// Example:

#include <stdio.h>

int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    
    int result = addNumbers(10, 20);
    printf("Sum = %d\n", result);
    return 0;
}


// Function Prototype
// A function prototype is a declaration of a function that tells the program about the function name, return type, and parameters.
// It is optional, but it helps the compiler to understand the function when it is called before the function definition. A function
// prototype is also known as a function declaration.

// Example:
#include <stdio.h>

int addNumbers(int a, int b);

int main() {

    int result = addNumbers(10, 20);
    printf("Sum = %d\n", result);

    return 0;
}


// Standard Library Function
// The standard library functions are built-in functions in C programming to handle tasks such as mathematical computations, I/O
// operations, string handling, etc. These functions are defined in the standard library header files.

// Example:
#include <stdio.h>
#include <math.h>

int main() {

    float add = add(10, 20);
    float divide = divide(10, 20);
    float multiply = multiply(10, 20);
    float subtract = subtract(10, 20);
    float result = sqrt(16);

    printf("Addition of 10 and 20 is %d\n", add);
    printf("Division of 10 and 20 is %d\n", divide);
    printf("Multiplication of 10 and 20 is %d\n", multiply);
    printf("Subtraction of 10 and 20 is %d\n", subtract);
    printf("Square root of 16 is %.2lf\n", result);

    return 0;
}







