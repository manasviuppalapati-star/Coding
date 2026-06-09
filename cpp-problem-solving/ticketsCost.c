#include <stdio.h>

struct tickets {
    int n;
    float price;
};

int main() {
    struct tickets t;
    int choice;
    float total, discounted;

    // Input values
    scanf("%d", &t.n);
    scanf("%f", &t.price);
    scanf("%d", &choice);

    // Calculate total cost
    total = t.n * t.price;

    // Print total cost
    printf("%.2f\n", total);

    // If discount is chosen
    if (choice == 1) {
        discounted = total - 75;
        printf("%.2f", discounted);
    }

    return 0;
}

