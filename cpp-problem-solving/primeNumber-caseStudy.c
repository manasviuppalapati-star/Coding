//If the input number is a prime number, the output displays "n is a prime number." where n is the input //number.

//If the input number is not a prime number, the output displays "n is not a prime number." where n is //the input number.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int flag = 1;

    if (n == 2 || n == 3) {
    } 
    else if (n % 2 == 0 || n % 3 == 0) {
        flag = 0;
    } 
    else {
        int divisor = 5;
        int square;

        square = divisor * divisor;

        if (square <= n) {
            if (n % divisor == 0 || n % (divisor + 2) == 0) {
                flag = 0;
            }
        }
    }

    if (flag == 1) {
        printf("%d is a prime number.", n);
    } else {
        printf("%d is not a prime number.", n);
    }

    return 0;
}

