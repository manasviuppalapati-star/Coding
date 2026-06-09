//If ch is an uppercase letter (from 'A' to 'Z'), the output prints: "Uppercase character".

//If ch is a lowercase letter (from 'a' to 'z'), the output prints: "Lowercase character".

//If ch is a digit (from '0' to '9'), the output prints: "Digit character".

//If ch is neither an uppercase letter, a lowercase letter, nor a digit, the output prints: "Special //character."


#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (ch>='A'&& ch<='Z'){
        printf("Uppercase charcter");
        
    }
        else if ( ch>= '0' && ch<= '9'){
            printf("Digit character");
        }
        else if (ch>='a'&& ch<='z'){
            printf("Lowercase character");
        }
        else{
            printf("Special character");
        }
    return 0;
}
