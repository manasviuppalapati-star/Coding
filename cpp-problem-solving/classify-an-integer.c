// To classify an integer into +ive,-ive or zero

#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int sign = (number >= 0) ? 0 : 1;
    int isZero = (number == 0);

    printf("The number is %s\n", (isZero) ? "zero" : (sign == 0) ? "positive" : "negative");
    return 0;
}