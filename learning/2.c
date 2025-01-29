//Data types in C:

//Different data types in C are used to store different types of data. The most common data types in C are int, char, float, double, and void.

// 1. int   (4 bytes) | %d for printing
// 2. double (8 bytes) | %lf for printing
// 3. float (4 bytes) | %f for printing
// 4. char (1 byte) | %c for printing


#include <stdio.h>
//int
int main() {
    
    int age = 30;
    printf("My age is %d", age);

    return 0;
    
}

//float and double
int main() {
    
    float height = 5.8f;
    printf("My height is %f", height);

    //suggested way to print double
    double weight = 70.5;
    printf("\nMy weight is %.2lf", weight);

    return 0;
}

//char
int main() {

    char character = 'A';
    printf("My character is %c", character);

    //ASCII value of character
    printf("\n%d", character);

    return 0;
}








