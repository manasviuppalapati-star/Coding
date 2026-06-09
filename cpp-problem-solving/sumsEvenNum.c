//The first line of output prints "Sum of even numbers: " followed by the sum of even numbers from 1 to //N.

//The second line prints "Sum of odd numbers: " followed by the sum of odd numbers from 1 to N.

// You are using GCC
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=2;i<=10;i+=2){
        printf("%d x %d = %d",n,i,n*i);
        
    }
    return 0;
}
