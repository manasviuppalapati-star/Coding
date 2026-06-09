#include <stdio.h>

int main() {
    char str[51];
    fgets(str, 51, stdin);   // read input string

    char *p = str;

    while (*p != '\0') {     // loop until end of string
        if (*p == 'a') {
            *p = '*';        // replace 'a' with '*'
        }
        p++;                 // move pointer forward
    }

    printf("%s", str);

    return 0;
}

