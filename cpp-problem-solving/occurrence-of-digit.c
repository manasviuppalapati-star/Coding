//The output is a single integer representing the count of occurrence of digit Y in a given number X.

#include <stdio.h>
void findDigitOccurrence(int number, int digit, int *occurrence) {
    *occurrence = 0;
 
    while (number != 0) {
        int lastDigit = number % 10;
        if (lastDigit == digit) {
            (*occurrence)++;
        }
        number /= 10;
    }
}
 
int main() {
    int number, digit;
    scanf("%d", &number);
    scanf("%d", &digit);
    int occurrence;
    findDigitOccurrence(number, digit, &occurrence);
    printf("%d",occurrence);

    return 0;
}