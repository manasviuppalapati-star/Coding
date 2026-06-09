#include <stdio.h>
#include <math.h>

void calculateAbsoluteDeviation(int *arr, int n) {
    double mean = 0.0;
    int i;
    // Calculate mean
    for ( i = 0; i < n; i++) {
        mean += *(arr + i);
    }
    mean /= n;

    // Print absolute deviations
    for ( i = 0; i < n; i++) {
        double deviation = fabs(*(arr + i) - mean);
        printf("%.2f ", deviation);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[10],i;

    // Read values
    for ( i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }

    calculateAbsoluteDeviation(arr, n);

    return 0;
}

