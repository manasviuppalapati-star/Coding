// checking vote eligibility
#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);
    (age > 17) ? (printf("Eligible for Voting")) : (printf("Not eligible for Voting"));
    return 0;
}