// To print the number of papers left after having the stack M-1 times
#include<stdio.h>
int main (){
    
    int N,M;
    scanf("%d,%d",&N,&M);
    for (int i =0;i<M;i++){
       N=N/2;// interger division
    }
    printf("%d\n",N);
    
    return 0;

} 