//If the given number is a mirror, then display “N: True” where N is the input integer.

//If the given number is not a mirror, then display “N: False” where N is the input integer.
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool isMirror(int n){
    char str[20];
    sprintf(str,"%d",n);
    int len=strlen(str);
    int mid=len/2;
    for (int i=0;i<mid;i++){
        if(str[i]!=str[len-1-i]){
            return false;
        }
    }
    return true;
}
int main(){
    int N;
    scanf("%d",&N);
    if(isMirror(N)){
        printf("%d :True",N);
    }
        else{
            printf("%d :False",N);
        }
    return 0;
}