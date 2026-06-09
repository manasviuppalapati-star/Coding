#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age;
    int matches;
    float avgRuns;
};

int main() {
    int n, i, j;

    scanf("%d", &n);
    struct Cricketer c[n];

    // Input
    for (i = 0; i < n; i++) {
        scanf("%s %d %d %f",
              c[i].name,
              &c[i].age,
              &c[i].matches,
              &c[i].avgRuns);
    }

    // Sorting (Ascending by average runs)
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (c[i].avgRuns > c[j].avgRuns) {
                struct Cricketer temp = c[i];
                c[i] = c[j];
                c[j] = tmp;
            }
        }
    }

    // Output
    for (i = 0; i < n; i++) {
        printf("%s %d %d %.2f\n",
               c[i].name,
               c[i].age,
               c[i].matches,
               c[i].avgRuns);
    }

    return 0;
}
