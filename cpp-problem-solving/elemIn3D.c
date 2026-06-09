#include <stdio.h>

int main() {
    int n, m, p,i,j,k;
    scanf("%d %d %d", &n, &m, &p);

    int arr[n][m][p];

    // Input the 3D matrix using pointer arithmetic
    for( i = 0; i < n; i++) {
        for( j = 0; j < m; j++) {
            for( k = 0; k < p; k++) {
                scanf("%d", *(*(arr + i) + j) + k);
            }
        }
    }

    // Coordinates
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    // Retrieve the value using pointer arithmetic
    int value = *(*(*(arr + x) + y) + z);

    printf("%d", value);

    return 0;
}

