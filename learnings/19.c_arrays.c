// C Arrays 
// An array is a collection of data items, all of the same type, accessed using a common name. A one-dimensional array is like a list; A two dimensional array is like a table; The C language places no limits on the number of dimensions in an array, though specific implementations may.
//
// Declaring an Array
// To declare an array in C, a programmer specifies the type of the elements and the number of elements required by an array as follows:
// type arrayName [ arraySize ];
// This is called a single-dimensional array. The arraySize must be an integer constant greater than zero and type can be any valid C data type. For example, to declare a 10-element array called balance of type double, use this statement:
// double balance[10];
// Initializing an Array
// You can initialize an array in C either one by one or using a single statement as follows:
// double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
// The number of values between braces { } cannot be larger than the number of elements that we declare for the array between square brackets [ ].
// If you omit the size of the array, an array just big enough to hold the initialization is created. Therefore, if you write:
// double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
// You will create exactly the same array as you did in the previous example. Following is an example to assign a single element of the array:
// balance[4] = 50.0;
// The above statement assigns the 5th element in the array with a value of 50.0. All arrays have 0 as the index of their first element which is also called the base index and the last index of an array will be total size of the array minus 1.
// Accessing Array Elements
// An element is accessed by indexing the array name. This is done by placing the index of the element within square brackets after the name of the array. For example:
// double salary = balance[9];

// Syntax for array declaration
// Assign Value to Array
// Array index
// Assign Values using index number
// Change Array Elements
// Loop and Array
// Index Out of bound Error

// Syntax for array declaration
// The syntax for declaring an array in C is:
// data_type array_name[array_size];

// Example:
int numbers[5];

// Assign Value to Array
int numbers[5] = {1, 2, 3, 4, 5};

// Array index
int numbers[5] = {1, 2, 3,};
// index: 0 1 2 3 4
// value: 1 2 3 0 0 

// Assign Values using index number
int numbers[5];
numbers[0] = 1;
numbers[1] = 2;
numbers[2] = 3;
numbers[3] = 4;
numbers[4] = 5;

// Change Array Elements
int numbers[5] = {1, 2, 3, 4, 5};
numbers[2] = 10;

printf("%d", numbers[2]); // Output: 10

// Loop and Array
#include <stdio.h>


int main(){ 
    
    int age[5];

    printf("Enter 5 Values: ");

    scanf("%d", &age[0]);
    scanf("%d", &age[1]);
    scanf("%d", &age[2]);
    scanf("%d", &age[3]);
    scanf("%d", &age[4]);

    printf("%d\n", &age[0]);
    printf("%d\n", &age[1]);
    printf("%d\n", &age[2]);
    printf("%d\n", &age[3]);
    printf("%d\n", &age[4]);

return 0;
}


#include <stdio.h>


int main(){ 
    
    int age[5];

    for(int i = 0; i < 5; ++i ){
        scanf("%d", &age[i]);
    }

    for(int i = 0; i < 5; ++i ){
        printf("%d\n", &age[i]);
    }


return 0;
}



