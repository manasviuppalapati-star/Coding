#include <stdio.h>

int main() {
    int i;
    float j;
    char k;

    // Read input values
    scanf("%d", &i);
    scanf("%f", &j);
    scanf(" %c", &k);

    // Print original locker addresses
    printf("Original locker address in i = %d\n", i);
    printf("Original locker address in j = %.2f\n", j);
    printf("Original locker address in k = %c\n", k);

    // Print new locker addresses after performing the operations
    printf("New locker address in i = %d\n", i + 1);
    printf("New locker address in k = %c\n", k + 1);

    return 0;
}
