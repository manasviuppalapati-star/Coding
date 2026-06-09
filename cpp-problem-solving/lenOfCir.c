//To display the arc length of a circle as a float value rounding off to two decimal places.


#include <stdio.h>

int main() {
    float radius, angle, arc_length;
    scanf("%f", &radius);
    scanf("%f", &angle);
    arc_length = 2 * 3.14 * radius * (angle / 360);
    printf("%.2f\n", arc_length);
    return 0;
}