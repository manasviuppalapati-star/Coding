//The output displays the generated sequence of characters, with each character sequence separated by a //space.
#include <stdio.h>

int main() {
    char char1, char2;
    int N;
    scanf(" %c", &char1);
    scanf(" %c", &char2);
    scanf("%d", &N);
    int line = 1;
    while (line <= N) {
        if (line % 2 == 1) {
            for (int i = 1; i <= line; i++) {
                printf("%c", char1);
            }
        } else {
            for (int i = 1; i <= line; i++) {
                printf("%c", char2);
            }
        }
        printf(" ");
        line++;
    }
    return 0;
}
