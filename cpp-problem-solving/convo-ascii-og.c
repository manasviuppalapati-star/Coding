// to display the ASCII value of the char after convo or og char

#include <stdio.h>

int main() {
    char charInput;
    scanf(" %c", &charInput);
    int asciiValue = (int)charInput;
    if (asciiValue >= 65 && asciiValue <= 90) {
        asciiValue += 32;
    } 
    
    else if (asciiValue >= 97 && asciiValue <= 122) {
        asciiValue -= 32;
    } 
    
    else {
        printf("ASCII Value: %d", asciiValue);
        return 0;
    }
    printf("ASCII Value: %d", asciiValue);
    return 0;
}