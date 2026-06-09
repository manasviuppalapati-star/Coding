//2nd The first line displays "Multiplication Result (as float): 
//" followed by the result of multiplying 
//num1 and num2 as a float value with two decimal values.


#include <stdio.h>

int main() {
    float num1, num2;
    scanf("%f", &num1);
    scanf("%f", &num2);
    float multiplicationResult = num1 * num2;
    printf("Multiplication Result (as float): %.2f\n", multiplicationResult);
    int convertedInteger = (int)multiplicationResult;
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            convertedInteger += 5;
            break;
        case 2:
            convertedInteger -= 5;
            break;
        case 3:
            convertedInteger /= 2;
            break;
    }
    printf("Converted Integer: %d", convertedInteger);
    return 0;
}
