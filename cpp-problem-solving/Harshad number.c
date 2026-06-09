//The output prints "n is a Harshad number" if the integer is a Harshad number
#include<stdio.h>
int main(){
    int n,rem,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        rem=temp%10;
        sum+=rem;
        temp/=10;
    }
    if(n%sum==0){
        printf("%d is a Harshad number",n);
        
    }
        else{
            printf("%d is not a Harshad number",n);
        }
    return 0;
}