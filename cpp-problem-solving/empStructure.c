#include<stdio.h>
struct employee{
    char empname[50];
    float empsal;
    int emphr;
};
int main(){
   struct employee emp;
   scanf("%s\n",emp.empname);
   scanf("%f\n",&emp.empsal);
   scanf("%d\n",&emp.emphr);
   int hrs=emp.emphr;
   float sal=emp.empsal;
   if(hrs>=12){
       printf("Final Salary: $%.2f\n",sal+ 150.00);
       printf("Total Salary: $%.2f",(sal+150.00)*30.00);
   }
   else if(hrs<12 && hrs>=10){
       printf("Final Salary: $%.2f\n",sal+ 100.00);
       printf("Total Salary: $%.2f",(sal+100.00)*30.00);
   }
    else if(hrs<10 && hrs>=8){
       printf("Final Salary: $%.2f\n",sal+ 50.00);
       printf("Total Salary: $%.2f",(sal+50)*30.00);
   }
   else{
       printf("Final Salary: $%.2f\n",sal);
       printf("Total Salary: $%.2f",sal*30.00);
   }
   return 0;
}

    

