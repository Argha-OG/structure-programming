// C Struct
// typedef in Struct 
// Sum of Complex Numbers

// C Struct
#include <stdio.h>

struct Person
{
    double salary;
    int age;

};


int main() {

    struct Person person1 = {
        .age = 25,
        .salary = 28000.00,
    };
    struct Person person2 = {
        .age = 30,
        .salary = 140000.00,
    };


    printf("Age of person1: %d\n", person1.age);
    printf("Salary of person1: %.2lf\n\n\n", person1.salary);

    printf("Age of person2: %d\n", person2.age);
    printf("Salary of person2: %.2lf\n", person2.salary);

    return 0;
}

// Example 2
#include <stdio.h>

struct Person
{
    double salary;
    int age;

} person1, person2;


int main() {


    person1.age = 25,
    person1.salary = 28000.00,
    printf("Age of person1: %d\n", person1.age);
    printf("Salary of person1: %.2lf\n\n\n", person1.salary);

    person2.age = 30,
    person2.salary = 140000.00,
    printf("Age of person2: %d\n", person2.age);
    printf("Salary of person2: %.2lf\n", person2.salary);

    return 0;
}

// typedef in Struct 
#include <stdio.h>

typedef struct Person
{
    double salary;
    int age;

} person;


int main() {

    person person1;

    person1.age = 25;
    person1.salary = 28000.00;
    printf("Age of person1: %d\n", person1.age);
    printf("Salary of person1: %.2lf\n\n\n", person1.salary);

    return 0;
}

// Sum of Complex Numbers
#include <stdio.h>

typedef struct Complex
{
    double real;
    double imag;
} complex;

int main () {

    complex c1 = {.real = 50, .imag = 20};
    complex c2 = {.real = 60, .imag = 10};

    complex sum;

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    printf("Sum is: %.2lf + %.2lf", sum.real, sum.imag);

    return 0;
}

