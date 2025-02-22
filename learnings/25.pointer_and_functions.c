// C Pointes and Functions
// Find the square of a number
// Return Pointers from a Function
// Add two numbers 


// C Pointes and Functions
#include <stdio.h>


    void findValue(int* num){

    *num = 55;
    
    }

    int main () {

        int number = 25;

        findValue(&number);

        printf("Number: %d", number);
        return 0;
    }
    

// Find the square of a number
#include <stdio.h>


    void findSqure(int* number){

    int square = *number * *number;

    *number = square;

    }
    
    int main () {

        int number = 10;

        findSqure(&number);

        printf("Square: %d", number);
        return 0;
    }

// Return Pointers from a Function
#include <stdio.h>


int* findSqure(int* number){

    int square = *number * *number;

    *number = square;

    return number;

    }
    
    int main () {

        int number = 10;

        int result = findSqure(&number);

        printf("result is: %d", *result);

        return 0;
    }


// Add two numbers 
#include <stdio.h>


int* addNumber(int* number1, int* number2, int* sum){


    *sum = *number1 + *number2;

    return sum;
    }
    
    int main () {

        int number1 = 5;
        int number2 = 10;
        int sum;

        int* result = addNumber(&number1, &number2, &sum);

        printf("Sum is: %d", *result);

        return 0;
    }
