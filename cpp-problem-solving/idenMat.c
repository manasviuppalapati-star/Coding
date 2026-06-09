#include<stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    // Input matrix
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", (*(arr + i) + j));
        }
    }

    // Check identity
    int isIdentity = 1;

    if(r != c) {
        isIdentity = 0;   // Non-square matrix
    } else {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                int value = *(*(arr + i) + j);

                if(i == j && value != 1)
                    isIdentity = 0;

                if(i != j && value != 0)
                    isIdentity = 0;
            }
        }
    }

    if(isIdentity)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");

    return 0;
}

