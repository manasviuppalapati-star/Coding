//swappingStr


#include <stdio.h>

int main() {
    char text[100], new_text[100];
    scanf("%[^\n]s", text);

    int i;
    for (i = 0; text[i] != '\0'; ++i) {
        if (text[i] == 'a') {
            new_text[i] = 'b';
        } else if (text[i] == 'A') {
            new_text[i] = 'B';
        } else {
            new_text[i] = text[i];
        }
    }

    new_text[i] = '\0';

    printf("%s\n", new_text);

    return 0;
}