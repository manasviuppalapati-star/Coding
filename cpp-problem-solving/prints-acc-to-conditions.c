//to displays one of the following statements:
//If n is equal to l, it prints: "n and l are equal."
//If n is less than l, it prints: "n is less than l."
//If n is greater than l, it prints: "n is greater than l."
//Here n and l represent the first and second numbers respectively.




#include <stdio.h>

int main() {
    // Declare variables with different type modifiers
    int number1;
    long number2;

    // Read input for numbers
    scanf("%d", &number1);
    scanf("%ld", &number2);

    // Perform type conversion for uniform comparison
    long convertedNumber1 = (long)number1;

    // Compare the numbers and print messages
    if (convertedNumber1 == number2) {
        printf("%d and %ld are equal.\n", number1, number2);
    } else if (convertedNumber1 < number2) {
        printf("%d is less than %ld.\n", number1, number2);
    } else {
        printf("%d is greater than %ld.\n", number1, number2);
    }

    return 0;
}