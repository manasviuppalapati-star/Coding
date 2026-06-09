//finding greatest of the 3 numbers
#include <stdio.h>

int main() {
    int num1,num2,num3;
        printf("enter the number=");
        scanf("%d",&num1);
        printf("enter the number=");
        scanf("%d",&num2);
        printf("enter the number=");
        scanf("%d",&num3);
        if (num1>num2 && num1>num3){
           printf("num1 is greater");
        }   
          else if (num2>num3) {
           printf("num2 is greater");
          }
          else {
              printf("num3 is greater");
           }
          
    return 0;
}
 

