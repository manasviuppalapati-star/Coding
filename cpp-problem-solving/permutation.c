#include <stdio.h>

long long factorial(int x) {
    long long fact = 1;
    int i;
    for ( i = 1; i <= x; i++)
        fact *= i;
    return fact;
}

long long calculatePermutations(int *n, int *r) {
    return factorial(*n) / factorial(*n - *r);
}

int main() {
    int n, r;
    int *pn, *pr;

    scanf("%d", &n);
    scanf("%d", &r);

    pn = &n;
    pr = &r;

    long long result = calculatePermutations(pn, pr);

    printf("%lld", result);

    return 0;
}

