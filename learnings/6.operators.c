// Operators in C

// Operators in C are used to perform operations on variables and values.
// Operators are used to perform operations on variables and values.
// Arithmetic Operators
// Addition Operator
// Division Operator
// Remainder Operator
// Increment and Decrement Operator 
// Multiple Operators

// Arithmetic Operators
// Arithmetic operators are used to perform mathematical operations like addition, subtraction, multiplication, etc.
// Operator	Description	Example
// +	Addition	Adds two operands	x + y
// -	Subtraction	Subtracts right operand from the left operand	x - y
// *	Multiplication	Multiplies two operands	x * y
// /	Division	Divides left operand by right operand	x / y
// %	Modulus	Divides left operand by right operand and returns remainder	x % y
// ++	Increment	Increases the value of the operand by 1	++x
// --	Decrement	Decreases the value of the operand by 1	--x

// Example: Arithmetic Operators
#include <stdio.h>

int main() {

    int x = 10;
    int y = 5;
    int result;

    // Addition Operator
    result = x + y;
    printf("Addition: %d\n", result);

    // Subtraction Operator
    result = x - y;
    printf("Subtraction: %d\n", result);

    // Multiplication Operator
    result = x * y;
    printf("Multiplication: %d\n", result);

    // Division Operator
    result = x / y;
    printf("Division: %d\n", result);

    // Modulus Operator
    result = x % y;
    printf("Modulus: %d\n", result);

    // Increment Operator
    x++;
    printf("Increment: %d\n", x);

    // Decrement Operator
    y--;
    printf("Decrement: %d\n", y);

    return 0;
}

// Division Operator
// The division operator divides the left operand by the right operand.
// Example: Division Operator
#include <stdio.h>

int main() {

    double x = 10;

    double result = x/4;

    printf("Division: %.2lf\n", result);

    return 0;

}

// Remainder Operator
// The remainder operator divides the left operand by the right operand and returns the remainder.
// Example: Remainder Operator
#include <stdio.h>

int main() {

    int x = 10;

    int result = x%4;

    printf("Division: %d\n", result);

    return 0;

}

// Increment and Decrement Operator
// The increment operator increases the value of the operand by 1.
// The decrement operator decreases the value of the operand by 1.
// Example: Increment and Decrement Operator
#include <stdio.h>
int main() {

    int x = 10;
    int y = 5;

    // Increment Operator
    x++;
    printf("Increment: %d\n", x);

    // Decrement Operator
    y--;
    printf("Decrement: %d\n", y);

    return 0;
}

// Multiple Operators
// You can use multiple operators in a single expression.
// Example: Multiple Operators
#include <stdio.h>
int main() {

    int x = 10;
    int y = 5;
    int z = 2;
    int result;

    result = x + y * z;
    printf("Result: %d\n", result);

    return 0;
}
