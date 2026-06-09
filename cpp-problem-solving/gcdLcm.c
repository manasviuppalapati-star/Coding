#include <stdio.h>

struct GCD_LCM {
    int a;
    int b;
};

// Function to compute GCD (Euclidean Algorithm) and LCM
void calculateGCDandLCM(struct GCD_LCM nums) {
    int x = nums.a;
    int y = nums.b;
    int temp, gcd, lcm;

    // Euclidean algorithm for GCD
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;

    // LCM formula
    lcm = (nums.a * nums.b) / gcd;

    printf("GCD: %d\n", gcd);
    printf("LCM: %d", lcm);
}

int main() {
    struct GCD_LCM nums;

    scanf("%d", &nums.a);
    scanf("%d", &nums.b);

    calculateGCDandLCM(nums);

    return 0;
}

