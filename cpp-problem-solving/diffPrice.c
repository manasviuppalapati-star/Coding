#include <stdio.h>

int main() {
    int N,i;
    scanf("%d", &N);

    float prices[100];
    float *ptr = prices;   // pointer to the first element of the array

    // Input prices using pointer
    for (i = 0; i < N; i++) {
        scanf("%f", (ptr + i));
    }

    // Print percentage change between consecutive days
    for ( i = 1; i < N; i++) {
        float previous = *(ptr + i - 1);   // price on previous day
        float current  = *(ptr + i);       // price on current day

        float percentChange = ((current - previous) / previous) * 100;

        printf("%.2f ", percentChange);
    }

    return 0;
}

