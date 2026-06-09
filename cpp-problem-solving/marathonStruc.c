#include <stdio.h>

struct TimeArray {
    int h[2];
    int m[2];
    int s[2];
};

int main() {
    struct TimeArray t;
    int sum_h, sum_m, sum_s;

    // Input first time
    scanf("%d %d %d", &t.h[0], &t.m[0], &t.s[0]);

    // Input second time
    scanf("%d %d %d", &t.h[1], &t.m[1], &t.s[1]);

    // Add seconds
    sum_s = t.s[0] + t.s[1];
    sum_m = t.m[0] + t.m[1] + sum_s / 60;
    sum_s %= 60;

    // Add minutes
    sum_h = t.h[0] + t.h[1] + sum_m / 60;
    sum_m %= 60;

    // Print result
    printf("%d:%d:%d hours", sum_h, sum_m, sum_s);

    return 0;
}

