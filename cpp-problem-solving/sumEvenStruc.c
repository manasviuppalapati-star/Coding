#include <stdio.h>

struct Range {
    int start;
    int end;
};

int sumOfEven(struct Range r) {
    int sum = 0,i;
    for( i = r.start; i <= r.end; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    struct Range range;
    
    // Input
    scanf("%d %d", &range.start, &range.end);

    // Output sum of even numbers
    printf("%d", sumOfEven(range));

    return 0;
}

