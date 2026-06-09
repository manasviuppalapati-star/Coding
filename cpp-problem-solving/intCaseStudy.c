//The output displays two integers separated by a space. The first integer is the product of the digits //in the first half of N, and the second integer is the product of the digits in the second half of N.

#include <stdio.h>

int calculate(int number) {
    int originalNumber = number;
    int length = 0;
    while (number != 0) {
        number /= 10;
        length++;
    }
    int midpoint = length / 2;
    int productLeft = 1;
    int productRight = 1;
    
    number = originalNumber;
    for (int i = 0; i < midpoint; i++) {
        productLeft *= (number % 10);
        number /= 10;
    }
    if (length % 2 != 0) {
        number /= 10;
    }
    for (int i = 0; i < midpoint; i++) {
        productRight *= (number % 10);
        number /= 10;
    }
    printf("%d %d", productRight, productLeft);
}

int main() {
    int inputNumber;
    scanf("%d", &inputNumber);
    calculate(inputNumber);
    
    return 0;
}