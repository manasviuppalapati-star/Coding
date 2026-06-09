#include <stdio.h>
#include <string.h>

void encodeString(char *input) {
    int sum = 0;
    char *p = input;

    while (*p != '\0') {
        int ascii = (int)*p;

        while (ascii > 0) {
            sum += ascii % 10;
            ascii /= 10;
        }

        p++;
    }

    printf("Encoded Sum: %d", sum);
}

int main() {
    char str[101];

    fgets(str, sizeof(str), stdin);

    // Remove newline added by fgets
    str[strcspn(str, "\n")] = '\0';

    encodeString(str);

    return 0;
}

