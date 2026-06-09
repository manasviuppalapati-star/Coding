#include <stdio.h>

struct PrimeSum {
    int n;
    int p1;
    int p2;
};

int isPrime(int x) {
	int i;
    if (x < 2) return 0;
    for ( i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;  // fixed comment
}

void find_prime_sums(struct PrimeSum *ps, int current, int *found) {
    if (current > ps->n / 2)
        return;

    if (isPrime(current) && isPrime(ps->n - current)) {
        printf("%d = %d + %d\n", ps->n, current, ps->n - current);
        *found = 1;
    }

    find_prime_sums(ps, current + 1, found);
}

int main() {
    struct PrimeSum ps;
    int found = 0;

    scanf("%d", &ps.n);

    find_prime_sums(&ps, 2, &found);

    if (!found) {
        printf("%d cannot be expressed as the sum of two prime numbers", ps.n);
    }

    return 0;
}

