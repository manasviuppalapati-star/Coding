// to calculate the 3rd angle of triangle when other 2 angles are given

#include <stdio.h>

int main() {
    int angle1, angle2;

    // Input the two angles
    scanf("%d", &angle1);
    scanf("%d", &angle2);

    // Calculate the third angle
    int third_angle = 180 - (angle1 + angle2);

    // The sum of all three angles is always 180
    int sum_of_angles = 180;

    // Calculate the product of the two given angles
    int product_of_angles = angle1 * angle2;

    // Print the results
    printf("Third Angle: %d\n", third_angle);
    printf("Sum of Angles: %d\n", sum_of_angles);
    printf("Product of Given Angles: %d\n", product_of_angles);

    return 0;
}
