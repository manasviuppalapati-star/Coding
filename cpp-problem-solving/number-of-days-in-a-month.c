//The output prints the number of days in the entered month along with a descriptive message.

//If the entered month number is invalid, the output prints "Invalid month number."


#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("January has 31 days.\n");
            return 0;
        case 2:
            printf("February has 28 or 29 days.\n");
            return 0;
        case 3:
            printf("March has 31 days.\n");
            return 0;
        case 4:
            printf("April has 30 days.\n");
            return 0;
        case 5:
            printf("May has 31 days.\n");
            return 0;
        case 6:
            printf("June has 30 days.\n");
            return 0;
        case 7:
            printf("July has 31 days.\n");
            return 0;
        case 8:
            printf("August has 31 days.\n");
            return 0;
        case 9:
            printf("September has 30 days.\n");
            return 0;
        case 10:
            printf("October has 31 days.\n");
            return 0;
        case 11:
            printf("November has 30 days.\n");
            return 0;
        case 12:
            printf("December has 31 days.\n");
            return 0;
        default:
            printf("Invalid month number.\n");
            return 0;
    }
}
