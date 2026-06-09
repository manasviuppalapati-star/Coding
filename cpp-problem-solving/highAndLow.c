#include <stdio.h>

int main() {
    int n,i;
    scanf("%d", &n);

    int temps[20];
    int *ptr = temps;   // pointer to the first element

    // Input temperatures using pointer
    for( i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    // Initialize max and min using the first element
    int max = *ptr;
    int min = *ptr;

    // Find highest and lowest using pointer arithmetic
    for( i = 1; i < n; i++) {
        int value = *(ptr + i);

        if(value > max)
            max = value;

        if(value < min)
            min = value;
    }

    printf("Highest temperatures: %d\n", max);
    printf("Lowest temperatures: %d", min);

    return 0;
}

