#include <stdio.h>

int main() {
    int N, i, isPronic = 0;
    scanf("%d", &N);

    for (i = 1; i * (i + 1) <= N; i++) {
        if (i * (i + 1) == N) {
            isPronic = 1;
            break;
        }
    }

    if (isPronic)
        printf("%d is a pronic number.", N);
    else
        printf("%d is not a pronic number.", N);

    return 0;
}

