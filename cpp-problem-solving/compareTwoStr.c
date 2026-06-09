#include <stdio.h>
#include <string.h>

int main() {
    char first[100], second[100];

    // Read input strings
    scanf("%s", first);
    scanf("%s", second);

    // Using strcmp (internally uses pointer arithmetic)
    if (strcmp(first, second) == 0) {
        printf("[%s] and [%s] are same strings", first, second);
    } else {
        printf("[%s] and [%s] are not same strings", first, second);
    }

    return 0;
}

