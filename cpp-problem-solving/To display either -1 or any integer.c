//To display either -1 or any integer indicating the performance status of the participant
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int Remainder=N%5;
    if (Remainder==0){
      printf("-1") ;
    }
     else{
         printf("%d",Remainder);
     }
        
    
}
