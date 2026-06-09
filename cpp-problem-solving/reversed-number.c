//The output prints the reversed number that represents the secret code.

#include <stdio.h>

// Function declaration
int processAppointmentCode(int code);

int main() {
    int code;
    scanf("%d", &code);
    printf("%d", processAppointmentCode(code));  // Added newline for clarity
    return 0;
}

// Function definition
int processAppointmentCode(int code) {
    int rem, rev = 0;
    while (code != 0) {
        rem = code % 10;
        code = code / 10;
        rev = rev * 10 + rem;
    }
    return rev;
}