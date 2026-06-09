// A program to perform a specific arithmetic operations
#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d %d",&a,&b,&c,&d);
    printf(" The result of (%d+%d*%d)/%d is: %d",a,b,c,d,(a+b*c)/d);
    return 0;
}
