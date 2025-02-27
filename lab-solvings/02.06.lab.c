#include <stdio.h>

int main() {
    float basic_salary, dearness_allowance, house_rent, gross_salary;

    printf("Enter Niloy's basic salary: ");
    scanf("%f", &basic_salary);

    dearness_allowance = 0.40 * basic_salary; // 40% of basic salary
    house_rent = 0.20 * basic_salary;        // 20% of basic salary

    gross_salary = basic_salary + dearness_allowance + house_rent;

    printf("Niloy's gross salary is: %.2f\n", gross_salary);

    return 0;
}
