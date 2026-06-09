//The first line prints "Factors: " followed by the factors for the given number as integers, separated //by a space.

//The second line prints "Odd factors: " followed by the odd factors for the given number as integers, //separated by a space.

//The third line prints "Even factors: " followed by the even factors for the given number as integers, //separated by a space.

//If there are no even factors present, the third line prints "Even factors: Unavailable".
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int i, count = 0;
    printf("Factors: ");
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            ++count;
            printf("%d ", i);
        }
    }

    printf("\nOdd factors: ");
    for (i = 1; i <= num; i++) {
        if (num % i == 0 && i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\nEven factors: ");
    int b=0;
    for (i = 1; i <= num; i++) {
        if (num % i == 0 && i % 2 == 0) {
            printf("%d ", i);
            b++;
        }
    }
    if (b==0) printf("Unavailable");
    return 0;
}
