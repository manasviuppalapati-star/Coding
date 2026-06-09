#include <stdio.h>

struct Budget {
    double income;
    double fixed;
    double variable;
};

// Function to calculate remaining amount
double calculateRemainingBudget(struct Budget b) {
    return b.income - (b.fixed + b.variable);
}

int main() {
    struct Budget b;
    
    // Input
    scanf("%lf", &b.income);
    scanf("%lf", &b.fixed);
    scanf("%lf", &b.variable);

    // Calculate remaining
    double remaining = calculateRemainingBudget(b);

    // Output rounded to 1 decimal
    printf("Remaining Budget: %.1f", remaining);

    return 0;
}

