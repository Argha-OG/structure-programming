// User Input in C

#include <stdio.h> 
int main () {

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d", age);

    return 0;
}

// Take Double as input 
#include <stdio.h>

int main() {

    double number;
    char alphabet;
    
    printf("Enter Double input: ");
    scanf("%lf", &number);

    printf("Enter Character input: ");
    scanf("\n%c", &alphabet);

    printf("Here is the double: %lf", number,"/nHere is Character: %c", alphabet);
    return 0;
}

// Take Multiple Inputs 
#include <stdio.h>
int main() {

    double number;
    char alphabet;

    printf("Enter Input: ");
    scanf("%lf %c", &number, &alphabet);

    printf("Here is the double: %lf", number);
    printf("\nHere is the character: %c", alphabet);
}