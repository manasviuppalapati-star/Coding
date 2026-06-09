//factorial


#include <stdio.h>

int main() {
    int number;
    int *ptr = &number;
    int n;
    
    scanf("%d", &n);

    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    printf("%d", factorial - n);

    return 0;
}