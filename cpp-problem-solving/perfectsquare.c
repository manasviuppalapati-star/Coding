//perfectsquare


#include <stdio.h>

int main() {
    int num1, num2, product;
    scanf("%d %d", &num1, &num2);

    int *ptr_product = &product;

    *ptr_product = num1 * num2;

    int isPerfectSquare = 0;
    for (int i = 1; i * i <= *ptr_product; ++i) {
        if (*ptr_product == i * i) {
            isPerfectSquare = 1;
            break;
        }
    }

    if (isPerfectSquare) {
        printf("%d is a perfect square", *ptr_product);
    } else {
        printf("%d is not a perfect square", *ptr_product);
    }

    return 0;
}