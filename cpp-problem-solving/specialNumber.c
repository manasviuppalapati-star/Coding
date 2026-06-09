//If N is a special number, print "N is a special number".

//Otherwise, print "N is not a special number".
#include <stdio.h>

int specialNumber(int n) {
    int fd, sd, td, sum;
    fd = n / 100;
    sd = (n / 10) % 10;
    td = n % 10;
    sum = fd + sd;
    
    if (sum == td) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int result = specialNumber(n);
    
    if (result == 1) {
        printf("%d is a special number", n);
    } else {
        printf("%d is not a special number", n);
    }

    return 0;
}