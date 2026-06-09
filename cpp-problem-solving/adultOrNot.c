//If n is less than 18, the output displays "Encouraged to Attend".

//Otherwise, the output prints "Consider Resting".
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<18){
        printf("Encouraged to Attend");
    }
        else{
            printf("Consider Resting");
        }
    return 0;
    
}