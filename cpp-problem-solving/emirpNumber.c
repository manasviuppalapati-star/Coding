//If N is an Emirp number, display "N is an Emirp number." where N is the input integer.

//Otherwise, it prints "N is not an Emirp number." where N is the input integer.
#include <stdio.h>
#include <stdbool.h>

bool is_emirp(int num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    int reversed_num = 0;
    int original_num = num;
    while (num != 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }

    if (original_num == reversed_num)
        return false;
    
    for (int i = 2; i * i <= reversed_num; i++) {
        if (reversed_num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int num;

    scanf("%d", &num);

    if (is_emirp(num)) {
        printf("%d is an Emirp number.", num);
    } else {
        printf("%d is not an Emirp number.", num);
    }
    return 0;
}