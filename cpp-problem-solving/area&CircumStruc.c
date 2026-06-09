#include <stdio.h>

struct Circle {
    float radius;
};

int main() {
    struct Circle c;
    scanf("%f", &c.radius);

    float PI = 3.14;
    float circumference = 2 * PI * c.radius;
    float area = PI * c.radius * c.radius;

    printf("Circumference of the circle with radius %.2f is %.2f.\n", c.radius, circumference);
    printf("Area of the circle with radius %.2f is %.2f.", c.radius, area);

    return 0;
}

