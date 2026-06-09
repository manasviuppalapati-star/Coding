// The first line displays "Multiplication Result (as float): " followed by the result of multiplying //num1 and num2 as a float value with two decimal values.
//The second line displays "Converted Integer: " followed by the result as an integer value after //performing the required operation on the converted result based on the choice.



#include<stdio.h>
int main(){
    float num1,num2;
    int choice;
    scanf("%f %f",&num1,&num2);
    scanf("%d",&choice);
    float rFloat;
    int rInt;
    if(choice==1){
        rFloat=num1*num2+5.0;
        rInt=(int)rFloat;
    }
     else if(choice==2){
         rFloat=num1*num2-5.0;
         rInt=(int)rFloat;
     }
      else if(choice==3){
          rFloat=num1*num2/2.0;
          rInt=(int)rFloat;
      }
      printf("Multiplication Result (as float): %.2f\n",num1*num2);
      printf("Coverted Integer: %d\n",rInt);
      return 0;
}
