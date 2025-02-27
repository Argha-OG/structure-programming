#include <stdio.h>

int main() {
    float meters, feet, inches, centimeters;

    printf("Enter the distance between Mirpur and Ashulia in meters: ");
    scanf("%f", &meters);

    centimeters = meters * 100.0;
    inches = meters * 39.37;
    feet = meters * 3.21;

    printf("Distance in feet: %.2f ft\n", feet);
    printf("Distance in inches: %.2f in\n", inches);
    printf("Distance in centimeters: %.2f cm\n", centimeters);

    return 0;
}