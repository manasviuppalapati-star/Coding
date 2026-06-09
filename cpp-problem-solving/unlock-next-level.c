//TO display "unlock next level" if the input meets the conditions
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    printf("%s\n", (number >= 10 && number <= 100 && number % 7 != 0) ? "Unlock Next Level" : "Level Locked");
    return 0;
}