// Type Conversion
// Type conversion is a way to convert a variable from one data type to another data type. For example, if you want to store a long value into a simple integer then you can typecast long to int. You can convert the values from one type to another explicitly using the cast operator as follows −
// (type_name) expression
// Here, type_name must be a valid C data type including char,
// w_char, int, float, double, bool, or any user-defined object,
// etc., and expression is any valid C expression.
// Example

#include <stdio.h>
int main() {

    char a = '5';
    int b = 10;
    int c = a + b; //ascii value of 5 is 53
    printf("Value of c: %d\n", c);
}

#include <stdio.h>
int main() {

    double a = '5';
    int b = 10;
    double c = a + b; // 
    printf("Value of c: %.2lf\n", c);
}

// long double
// double
// float
// long
// int
// short
// char
// lower data type converts to higher data type

// Explicit Type Conversion
// You can convert the values from one type to another explicitly using the cast operator as follows −
// (type_name) expression
// Here, type_name must be a valid C data type including char, w_char, int, float, double, bool, or any user-defined object, etc., and expression is any valid C expression.
// Example

// double to int
#include <stdio.h>
int main() {

    double a = 10.5;

    int b = 9;

    int c = (int) a + b;

    printf("Value of c: %d\n", c);

    return 0;
}

// int to double
#include <stdio.h>
int main() {

    int a = 10;

    double b = 9.5;

    double c = a + b;

    printf("Value of c: %.2lf\n", c);

    return 0;
}



