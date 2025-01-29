// variables and printing output

#include <stdio.h>

//type1
// int age;
// age = 30;

//type2
// int age = 30;

//Change value of variables
int main() {
    
    int age = 30;
    printf("My age is %d", age);

    age = 32;
    printf("\nMy new age is","%d", age);


    return 0;
}

//Assign variable to another variable
int main() {
    
    int firstNumber = 30;
    printf("First number is %d", firstNumber);

    int secondNumber = firstNumber;
    printf("\nSecond number is %d", secondNumber);


    return 0;
}