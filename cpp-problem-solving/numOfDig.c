//The output displays an integer, representing the number of digits in n.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count =0;
    do {
        count++;
        n/=10;
    }
    while(n!=0);
    printf("%d",count);
    return 0;
}