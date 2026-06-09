//Fibonacci series
#include <stdio.h>

int main() {
    int nterms, num1= 0,  num2= 1, num3, i;
 
    // Ask user to input number of terms 
    printf("Enter the number of terms: ");
    scanf("%d", &nterms);
 
    printf("First %d terms of the Fibonacci series:\n", nterms);
    for (i = 0; i < nterms; i++) {
        if (i <= 1) {
            num3= i;
        } else {
            num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
        }
        printf("%d ", num3);
    }
    printf("\n");

    return 0;
}
