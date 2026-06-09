// To calculate the luck factor 
// luck facter= sum of individual digits of the number
#include<stdio.h>
int main() {
    int n,sum;
    scanf("%d",&n);// here n represents the given number (given in question)
    if(n<=9999 && n>=1000){
        sum+=n%10;
        n/=10;
        sum+=n%10;
        n/=10;
        sum+=n%10;
        n/=10;
        sum+=n%10;
        printf("%d",sum);
    }
    return 0 ;
}