//The output prints two space-separated integers p1 and p2, representing the smallest possible prime //number, p1+p2 = N.


#include <stdio.h>
#include <stdbool.h>

bool primeDivision(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 2; i <= N / 2; i++) {
        if (primeDivision(i) && primeDivision(N - i)) {
            printf("%d %d\n", i, N - i);
            break;
        }
    }
    return 0;
}