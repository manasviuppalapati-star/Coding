//Age:


#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    int age;

    scanf("%s %d", name, &age);

    char *ptr_name = name;
    int *ptr_age = &age;

    int B;
    scanf("%d", &B);

    int A1 = *ptr_age + 10;
    int B1 = B + 10;

    int difference = abs(B - *ptr_age);

    printf("%d\n", A1);
    printf("%d\n", B1);
    printf("%d\n", difference);

    return 0;
}