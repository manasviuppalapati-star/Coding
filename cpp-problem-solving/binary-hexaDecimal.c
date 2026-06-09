//1st line displays "Binary: " followed by the binary representation without leading zeros.
//2nd line displays "Hexadecimal: " followed by the hexadecimal representation.


#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    printf("Binary: ");
    
    int leadingZero = 1; 
    
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        int bit = (number >> i) & 1;
        
        if (bit == 1) {
            leadingZero = 0; 
        }
        
        if (!leadingZero) {
            printf("%d", bit);
        }
    }

    printf("\n");
    printf("Hexadecimal: %X\n", number);

    return 0;
}
