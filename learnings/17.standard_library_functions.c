// Standard Library Function in C
// The standard library functions are built-in functions in C programming to handle tasks such as mathematical computations, I/O operations, string handling, etc. These functions are defined in the C standard library, which is a collection of header files that contain built-in functions.

// The standard library functions are declared in the following header files:
// stdio.h: This header file contains functions for input and output operations.
// math.h: This header file contains functions for mathematical operations.
// string.h: This header file contains functions for string operations.
// ctype.h: This header file contains functions for character handling.
// stdlib.h: This header file contains functions for memory allocation, process control, conversions, etc.
// time.h: This header file contains functions for date and time operations.
// stdarg.h: This header file contains functions for handling variable arguments.
// assert.h: This header file contains functions for debugging.
// stdbool.h: This header file contains functions for boolean data type.
// errno.h: This header file contains functions for error handling.
// locale.h: This header file contains functions for localization.
// setjmp.h: This header file contains functions for non-local jumps.
// signal.h: This header file contains functions for signal handling.
// stdint.h: This header file contains functions for integer types.

// stdio.h functions
// The stdio.h header file contains functions for input and output operations. Some of the commonly used functions in stdio.h are:
// Basic Input/Output Functions
// printf(): This function is used to print formatted output to the standard output stream (stdout).
// scanf(): This function is used to read formatted input from the standard input stream (stdin).
// gets(): This function is used to read a string from the standard input stream (stdin).
// puts(): This function is used to write a string to the standard output stream (stdout).
// putchar(): This function is used to write a character to the standard output stream (stdout).
// getchar(): This function is used to read a character from the standard input stream (stdin).
// Example:
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}

// Math Functions
// The math.h header file contains functions for mathematical operations. Some of the commonly used functions in math.h are:
// sqrt(): This function is used to calculate the square root of a number.
// pow(): This function is used to calculate the power of a number.
// abs(): This function is used to calculate the absolute value of a number.
// ceil(): This function is used to round up a number to the nearest integer.
// floor(): This function is used to round down a number to the nearest integer.
// sin(): This function is used to calculate the sine of an angle.
// cos(): This function is used to calculate the cosine of an angle.
// tan(): This function is used to calculate the tangent of an angle.
// log(): This function is used to calculate the natural logarithm of a number.
// exp(): This function is used to calculate the exponential value of a number.
// Example:
#include <stdio.h>
#include <math.h>

int main() {
    float num = 16.25;
    float result = sqrt(num);
    printf("Square root of %.2f is %.2f\n", num, result);
    return 0;
}

// Character Functions
// The ctype.h header file contains functions for character handling. Some of the commonly used functions in ctype.h are:
// isalpha(): This function is used to check if a character is an alphabet.
// isdigit(): This function is used to check if a character is a digit.
// isalnum(): This function is used to check if a character is an alphanumeric character.
// islower(): This function is used to check if a character is a lowercase alphabet.
// isupper(): This function is used to check if a character is an uppercase alphabet.
// tolower(): This function is used to convert a character to lowercase.
// toupper(): This function is used to convert a character to uppercase.
// Example:
#include <stdio.h>
#include <ctype.h>

int main() {

    char ch = 'A';
    char upper = toupper(ch);
    char lower = tolower(ch);

    printf("Uppercase: %c\n", upper);
    printf("Lowercase: %c\n", lower);
    
    
    return 0;
}
