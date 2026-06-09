#include <stdio.h>
#include <stdlib.h>   // for abs()

int main() {
    int n,i;
    scanf("%d", &n);

    int arr[20];
    int *ptr = arr;   // pointer to first element

    // Input n integers using pointer
    for( i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    // Initialize min and max using pointers
    int min = *ptr;
    int max = *ptr;

    // Traverse array using pointer arithmetic
    for( i = 1; i < n; i++) {
        int value = *(ptr + i);
        if(value < min)
            min = value;
        if(value > max)
            max = value;
    }

    int maxAbsDiff = abs(max - min);

    printf("%d", maxAbsDiff);

    return 0;
}

