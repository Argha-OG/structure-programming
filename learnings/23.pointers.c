//  C Pointers 
//  Pointer Variables
//  Access Value using Pointers
//  Change Value using Pointers
//  Common Mistakes in Pointers 

// C Pointers
#include <stdio.h>

int main () {

    int age = 25;

    printf("%p", &age);

    int* ptr = &age;


    printf("\n%p", ptr);
    

    return 0;
}

//  Access Value using Pointers
#include <stdio.h>

int main () {

    int age = 25;

    int* ptr = &age;


    printf("Address: %p\n", ptr);
    printf("Value: %d\n", *ptr);
    

    return 0;
}

//  Change Value using Pointers
#include <stdio.h>

int main () {

    int age = 25;

    int* ptr = &age;


    *ptr = 32;

    printf("New Value: %d\n", *ptr);
    

    return 0;
}

//  Common Mistakes in Pointers

    int *ptr; //types value, avoid this mistake

    int* ptr; // write form 

    ptr = number; // invalid
    *ptr = &number; // invalid
    ptr = &number; // valid
    *ptr = number; // valid
