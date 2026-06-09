// result for a specific arithmetic expression

#include <stdio.h>

int main() {
    int a, b, c, result;
    scanf("%d %d %d", &a, &b, &c);
    result =  a + b * c - (a / b);
    printf("The result of a + b * c - (a / b) is %d\n", result);
    return 0;
}