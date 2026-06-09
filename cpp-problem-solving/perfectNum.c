#include <stdio.h>

struct NumberInfo {
    int n;
    char type[20];
};

// Function to find and assign the type of number
void findType(struct NumberInfo *numInfo) {
    int sum = 0,i;

    // Find sum of proper divisors
    for ( i = 1; i <= numInfo->n / 2; i++) {
        if (numInfo->n % i == 0)
            sum += i;
    }

    // Determine type
    if (sum == numInfo->n)
        sprintf(numInfo->type, "Perfect number");
    else if (sum < numInfo->n)
        sprintf(numInfo->type, "Deficient number");
    else
        sprintf(numInfo->type, "Abundant number");
}

int main() {
    struct NumberInfo num;

    scanf("%d", &num.n);

    findType(&num);

    printf("%s", num.type);

    return 0;
}

