#include <stdio.h>

int main() {
    char str[100];
    char *p;
    int count = 0;

    // Read input string
    scanf("%s", str);

    // Pointer to string
    p = str;

    // Traverse using pointer
    while (*p != '\0') {
        char ch = *p;

        // Check for vowels (both cases)
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
            count++;
        }

        p++;  // Move pointer to next character
    }

    printf("Number of vowels in the string: %d", count);

    return 0;
}

