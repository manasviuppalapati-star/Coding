//The first line of output displays space-separated integers representing numbers from 1 to N that have //exactly 9 factors.

//The second line displays a single integer representing the count of numbers with exactly 9 factors.

#include<stdio.h>
int count_no_of_divisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            count = count + 1;
    }
    return count;
}

void check_9_factors(int n) {
    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (count_no_of_divisors(i) == 9) {
            printf("%d ", i);
            c = c + 1;
        }
    }
    printf("\n%d\n", c);
}

int main() {
    int n;
    scanf("%d", &n);
    check_9_factors(n);
    return 0;
}

