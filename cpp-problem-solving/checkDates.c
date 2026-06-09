#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

// Function to input a date
void inputDate(struct Date *d) {
    scanf("%d %d %d", &d->day, &d->month, &d->year);
}

// Function to compare dates
int areDatesEqual(struct Date d1, struct Date d2) {
    return (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year);
}

int main() {
    struct Date d1, d2;

    // Input two dates
    inputDate(&d1);
    inputDate(&d2);

    // Compare and print result
    if (areDatesEqual(d1, d2)) {
        printf("Dates are Equal");
    } else {
        printf("Dates are not Equal");
    }

    return 0;
}

