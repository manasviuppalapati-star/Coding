#include <stdio.h>

int main() {
    int N,i;
    scanf("%d", &N);

    int arr[25];
    int *ptr = arr;   // pointer to the first element

    // Read N product quantities using pointer
    for( i = 0; i < N; i++) {
        scanf("%d", (ptr + i));
    }

    int lower, upper;
    scanf("%d %d", &lower, &upper);

    int count = 0;

    // Count items within range using pointers
    for( i = 0; i < N; i++) {
        int value = *(ptr + i);
        if(value >= lower && value <= upper) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

