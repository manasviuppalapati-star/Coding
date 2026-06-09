//The output displays the sum of odd numbers between a and b.


#include<stdio.h>
int main(){
    int a,b,sum=0,i;
    scanf("%d %d",&a,&b);
    for (i=a;i<=b;i++){
        if (i%2==0){
            continue;
            sum+=i;
        }
    }
    
    printf("%d",sum);
    return 0;
    
    
}