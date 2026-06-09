// to print model name and mileage of a scooter
#include <stdio.h>
#include <string.h>

int main() {
    char mname[250];
    int mileage;

    fgets(mname, sizeof(mname), stdin);
    mname[strcspn(mname, "\n")] = 0; // remove newline

    scanf("%d", &mileage);

    printf("The scooter %s gives mileage of %d km/hr.\n", mname, mileage);

    return 0;
}
