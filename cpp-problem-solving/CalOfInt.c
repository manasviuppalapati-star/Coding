//To display "True" if both a&b are non 0, otherwise "False"
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int result = (a != 0) && (b != 0);
    printf("%s", result ? "True" : "False");
    return 0;
}