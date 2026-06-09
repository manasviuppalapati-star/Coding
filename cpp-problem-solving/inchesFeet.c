#include <stdio.h>

typedef struct {
    int feet;
    float inch;
} Distance;

int main() {
    int N;
    scanf("%d", &N);

    Distance d;
    int totalFeet = 0,i;
    float totalInch = 0.0;

    for ( i = 0; i < N; i++) {
        scanf("%d %f", &d.feet, &d.inch);
        totalFeet += d.feet;
        totalInch += d.inch;
    }

    // Convert inches to feet if inch >= 12
    while (totalInch >= 12.0) {
        totalInch -= 12.0;
        totalFeet += 1;
    }

    printf("%d\n", totalFeet);
    printf("%.2f", totalInch);

    return 0;
}

