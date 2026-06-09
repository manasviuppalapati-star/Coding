#include <stdio.h>

struct Student {
    char name[50];
    float grade[5];
    float average;
};

int main() {
    struct Student s;
    scanf("%s", s.name);
    int i;
    float sum = 0.0;
    for ( i = 0; i < 5; i++) {
        scanf("%f", &s.grade[i]);
        sum += s.grade[i];
    }

    s.average = sum / 5.0;

    printf("Name: %s\n", s.name);
    for ( i = 0; i < 5; i++) {
        printf("Grade point %d: %.2f\n", i + 1, s.grade[i]);
    }

    // If needed to print average later:
    // printf("Average: %.2f\n", s.average);

    return 0;
}

