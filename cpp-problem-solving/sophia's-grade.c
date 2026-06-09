//to print sophia's grade by her marks
#include<stdio.h>
#include<math.h>
int main(){
    int N;// N represents exam mark of sofia ( given in question )
    scanf("%d \n",&N);
    if(N>=90 && N<=100){
        printf("A");
    }
      else if(N>=80 && N<=89){
        printf("B");
      }
      else if(N>=70 && N<=79){
        printf("C");
      }
     else if(N>=60 && N<=69){
         printf("D");
     }
     else{
         printf("F");
     }
     return 0 ;

    
    
}
