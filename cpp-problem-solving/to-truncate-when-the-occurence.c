//sir, to truncate when the occurence of a non-uppercase letter happens

#include <stdio.h>
 
int main()
{
    char str[250];
    scanf("%[A-Z]s", str);
    printf("%s", str);
    return 0;
    
}