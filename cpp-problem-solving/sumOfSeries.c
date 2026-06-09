//The output displays "Sum: " followed by the floating point number, representing the calculated sum of //the series.

#include<stdio.h>
int main(){
    int n,i;
    float sum=0.0;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if(i%2==0){
            sum-=1.0/i;
            
        }
           else{
               sum+=1.0/i;
           }
         
    }
    printf("Sum: %.2f",sum);
    return 0;
}