//"n is a Palindrome" if n is a palindrome.
#include<stdio.h>
int main(){
    int n,temp,rev=0;
    scanf("%d",&n);
    temp=n;
    while (temp!=0){
        rev=rev*10+temp%10;
        temp/=10;
    }
    if(rev==n){
        printf("%d is  a Palindrome",n);
    }
        else{
            printf("%d is Not a Palindrome",n);
            
        }
    return 0;
}