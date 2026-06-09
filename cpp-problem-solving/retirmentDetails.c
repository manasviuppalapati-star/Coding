#include <stdio.h>

struct Person {
    int age;
};

int main() {
    struct Person p;
    struct Person *p_ptr = &p; 

    scanf("%d", &p_ptr->age);

    if (p_ptr->age < 18) {
        printf("Invalid");
        return 0;
    }

    if (p_ptr->age >= 65) {
        printf("Already retired!");
        return 0;
    }

    int retirementAge = 65;
    int currentYear = 2023;

    int retirementYear = currentYear + (retirementAge - p_ptr->age);
    int remainingYears = retirementYear - currentYear;
    int remainingDays = remainingYears * 365;

    printf("Retirement Year: %d\n", retirementYear);
    printf("Remaining Years: %d\n", remainingYears);
    printf("Remaining Days: %d\n", remainingDays);

    return 0;
}
