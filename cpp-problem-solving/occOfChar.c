#include <stdio.h>

int main() {
    char str[50], ch;
    char *p;
    int count = 0;

    // Read input string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Read the character to find
    scanf("%c", &ch);

    // Pointer to start of string
    p = str;

    // Traverse using pointer
    while (*p != '\0') {
        if (*p == ch) {
            count++;
        }
        p++;
    }

    printf("%d", count);

    return 0;
}

