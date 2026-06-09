//f N is odd, the output prints "Reversed number: " followed by the reversed number of N.

//If N is even, the output prints "Sum of digits: " followed by the sum of the digits of N.

#include <stdio.h>

int main() {
    int N, number, reversed = 0, sum_digits = 0, digit;

    scanf("%d", &N);

    number = N;

    if (N % 2 != 0) {
        goto odd_calculation;
    } else {
        goto even_calculation;
    }

    odd_calculation:

    while (N != 0) {
        digit = N % 10;
        reversed = reversed * 10 + digit;
        N /= 10;
    }
    printf("Reversed number: %d", reversed);
    goto end;

    even_calculation:
    while (number != 0) {
        digit = number % 10;
        sum_digits += digit;
        number /= 10;
    }
    printf("Sum of digits: %d", sum_digits);

    end:
    return 0;
}
