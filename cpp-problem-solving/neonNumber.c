//If N is a neon number, print "N is a neon number"
//Otherwise, print "N is not a neon number"

#include <stdio.h>

int neon(int n) {
    int square, sum_of_digits = 0;
    square = n * n;
    while (square != 0) {
        sum_of_digits = sum_of_digits + (square % 10);
        square /= 10;
    }
    return (sum_of_digits == n);
}

int main() {
    int n;
    int isneon = 0;
    scanf("%d", &n);
    isneon = neon(n);
    isneon ? printf("%d is a neon number", n) : printf("%d is not a neon number", n);
    return 0;
}
