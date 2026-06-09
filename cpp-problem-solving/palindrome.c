//palindrome


#include<stdio.h>
#include<string.h>
int main(){
    char s[15];
    fgets(s,sizeof(s),stdin);
    int len=strlen(s);
    int palindrome=1;
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-1-i]){
            palindrome=0;
            break;
        }
    }
    if(palindrome){
        printf("%s is a palindrome",s);
    }
    else{
        printf("%s is not  a palindrome",s);
    }
    return 0;
}
