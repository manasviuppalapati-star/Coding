#include <stdio.h>
#include <ctype.h>   // for tolower()

int main() {
    char str[101];
    fgets(str, 101, stdin);    // Read string with spaces if needed

    char *p = str;
    int vowels = 0, consonants = 0;

    while (*p != '\0' && *p != '\n') {   // stop at end or newline
        char ch = tolower(*p);           // convert to lowercase

        if (ch >= 'a' && ch <= 'z') {    // check alphabet
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
        p++;      // move pointer to next character
    }

    printf("%d %d", vowels, consonants);

    return 0;
}

