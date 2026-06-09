//population



#include <stdio.h>

int main() {
    char name1[50], name2[50], name3[50];
    int population1, population2, population3;

    scanf("%s %d", name1, &population1);
    scanf("%s %d", name2, &population2);
    scanf("%s %d", name3, &population3);

    char *ptr_name1 = name1;
    char *ptr_name2 = name2;
    char *ptr_name3 = name3;

    int *ptr_population1 = &population1;
    int *ptr_population2 = &population2;
    int *ptr_population3 = &population3;

    int totalPopulation = *ptr_population1 + *ptr_population2 + *ptr_population3;
    double averagePopulation = (double)totalPopulation / 3.0;

    printf("%d\n", totalPopulation);
    printf("%.2lf\n", averagePopulation);

    return 0;
}