z#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else if (islower(str[i]))
            str[i] = toupper(str[i]);
    }

    printf("%s", str);

    return 0;
}
