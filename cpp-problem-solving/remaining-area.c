// To find the remaining area of the house
#include<stdio.h>
int main(){
    int a,b,s1,s2;
    scanf("%d\n%d",&s1,&s2);
    a=s1*s1;
    b=s2*s2;
    if(a>b){
        printf("Area to be decorated is %d",a-b);
       
    }
      else{
        printf("Area to be decorated is %d",b-a);  
      }
     return 0;
    
}
