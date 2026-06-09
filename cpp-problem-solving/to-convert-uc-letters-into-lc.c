// to convert uppercase letters into lowercase letters
#include <stdio.h>
#include <ctype.h>

int main() {
    char upperL, lowerL;

    scanf("%c", &upperL);

    lowerL = tolower(upperL);

    printf("%c", lowerL);

    return 0;
}
