// to display valid -the number is positive or even, invaild for vice versa
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    printf("%s",(number>0 || number%2==0) ? "Valid" : "Invalid");
    return 0;
}
