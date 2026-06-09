#include <stdio.h>

int main() {
    int r, c, d;
    scanf("%d %d %d", &r, &c, &d);

    int arr[r][c][d];

    // Input the 3D matrix using pointers
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            for(int k = 0; k < d; k++) {
                scanf("%d", *(*(arr + i) + j) + k);
            }
        }
    }

    // Increase each bin capacity by 2 using pointers
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            for(int k = 0; k < d; k++) {
                *(*(*(arr + i) + j) + k) += 2;
            }
        }
    }

    // Print the updated 3D matrix
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            for(int k = 0; k < d; k++) {
                printf("%d ", *(*(*(arr + i) + j) + k));
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

