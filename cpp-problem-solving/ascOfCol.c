#include <stdio.h>

int main() {
    int r, c,i,j,k;
    scanf("%d %d", &r, &c);

    int matrix[50][50];  

    // Input matrix using pointers
    for( i = 0; i < r; i++) {
        for( j = 0; j < c; j++) {
            scanf("%d", (*(matrix + i) + j));
        }
    }

    // Sort each row using pointer arithmetic (Bubble Sort)
    for( i = 0; i < r; i++) {
        for( j = 0; j < c - 1; j++) {
            for( k = 0; k < c - j - 1; k++) {
            	//printf("[j,z]=[%d,%d]\n",i,j,k);

                int *a = (*(matrix + i) + k);
               // printf("a=%d\n",*a);
                int *b = (*(matrix + i) + k + 1);
                //printf("b=%d\n",*b); 

                if(*a > *b) {
                    int temp = *a;
                    *a = *b;
                    *b = temp;
                }
                //printf("in the loop = %d %d\n",*a,*b);
            }
        }
    }

    // Print sorted matrix using pointers
    for( i = 0; i < r; i++) {
        for( j = 0; j < c; j++) {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }

    return 0;
}

