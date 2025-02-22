    // Preprocesor and Macros


    // #include Preprocessor
    // #define Preprocessor
    // Define Function Macros


// #include Preprocessor
#include <stdio.h>
#include <math.h>


// #define Preprocessor
#define PI 3.14159
#define SQUARE(x) (x * x)
#define CUBE(x) (x * x * x)

// Define Function Macros
#include <stdio.h>

#define PI 3.1416
#define circleArea(r) (PI * (r * r))

int main() {
    double radius = 10;

    double area = circleArea(radius);

    printf("%.2lf", area);

    return 0;
}