//The output prints an integer, representing the immediate perfect cube less than N.

#include <stdio.h>

void largestPerfectCube(int *num) {
    int cubeRoot = 1;
    while (cubeRoot * cubeRoot * cubeRoot < *num) {
        cubeRoot++;
    }
    cubeRoot--;
    *num = cubeRoot * cubeRoot * cubeRoot;
}

int main() {
    int num;
    scanf("%d", &num);
    largestPerfectCube(&num);
    printf("%d", num);
    return 0;
}