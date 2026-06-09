// To display the encrypted character after performing a coversion based on the given rules 
#include<stdio.h>
#include<ctype.h>
int main(){
    char n;
    char txt;
    scanf("%c",&n);
    if(isupper(n)){
        txt=n+2;
    }
        else if (islower(n)){
            txt=n-2;
        }
        else {
            txt=n+5;
        }
        
    printf("%c\n",txt);
    return 0;
       
}
