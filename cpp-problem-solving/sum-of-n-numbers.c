// sum of n numbers
#include <stdio.h>

int main() {
    int ran, num1, sum = 0;

    printf("Enter the range of numbers: ");
    scanf("%d", &ran);

    for (num1 = 0; num1 <= ran; num1++) {
        sum += num1;   // add each number to sum
    }

    printf("Sum = %d\n", sum);
    

    return 0;
}



