//The output prints the multiplication table for the given number up to 10 in separate lines in the //following format:

#include <stdio.h>

int main() {
    int number;
    int multiplier = 1;
    scanf("%d", &number);

    do {
        int product = number * multiplier;
        printf("%d x %d = %d\n", number, multiplier, product);
        multiplier++;
    } while (multiplier <= 10);

    return 0;
}