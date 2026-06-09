// to determine the eligibility of a person
#include<stdio.h>
int main(){
    int age,height;
    scanf("%d\n%d",&age,&height);
    if(age>=18 && height>=150){
        printf("Allowed!");
    }
     else{
         printf("Sorry,Not Allowed");
     }
     return 0;
}
