#include <stdio.h>

int main() {
    int marks1, marks2, marks3, marks4, marks5, aggregate;
    float average;

    printf("Enter marks obtained in subject 1: ");
    scanf("%d", &marks1);

    printf("Enter marks obtained in subject 2: ");
    scanf("%d", &marks2);

    printf("Enter marks obtained in subject 3: ");
    scanf("%d", &marks3);

    printf("Enter marks obtained in subject 4: ");
    scanf("%d", &marks4);

    printf("Enter marks obtained in subject 5: ");
    scanf("%d", &marks5);

    aggregate = marks1 + marks2 + marks3 + marks4 + marks5;
    average = (float)aggregate / 5.0;

    printf("Aggregate marks: %d\n", aggregate);
    printf("Average marks: %.2f\n", average);

    return 0;
}
