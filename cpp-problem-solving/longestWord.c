#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char longest[1000];
    char *p, *start;
    int maxLen = 0, len = 0;

    // Read input sentence (including spaces)
    fgets(str, sizeof(str), stdin);

    p = str;  // pointer to traverse the string

    while (*p != '\0') {

        // Skip spaces
        while (*p == ' ')
            p++;

        // Mark start of a word
        start = p;
        len = 0;

        // Count characters of this word
        while (*p != ' ' && *p != '\0') {
            len++;
            p++;
        }

        // If this is the longest word so far, copy it
        if (len > maxLen) {
            maxLen = len;
            strncpy(longest, start, len);
            longest[len] = '\0';  // null-terminate
        }
    }

    printf("Longest word: %s", longest);

    return 0;
}

