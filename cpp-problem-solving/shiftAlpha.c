#include <stdio.h>

void shiftCipher(char *input, int shift) {
    char *p = input;

    while (*p != '\0') {

        // For lowercase letters
        if (*p >= 'a' && *p <= 'z') {
            *p = ((*p - 'a' + shift) % 26) + 'a';
        }
        // For uppercase letters
        else if (*p >= 'A' && *p <= 'Z') {
            *p = ((*p - 'A' + shift) % 26) + 'A';
        }
        // Non-alphabetic characters remain unchanged

        p++;   // Move pointer
    }
}

int main() {
    char str[101];
    int shift;

    // Read string including spaces
    fgets(str, sizeof(str), stdin);

    scanf("%d", &shift);

    shiftCipher(str, shift);

    printf("%s", str);

    return 0;
}

