//The output displays two integers representing the remaining apples and oranges respectively.


#include<stdio.h>

int main()
{
   int m,n,m1,n1,x,y,total_apples,total_oranges;
   scanf("%d",&m);
   scanf("%d",&n);
   scanf("%d",&m1);
   scanf("%d",&n1);
   scanf("%d",&x);
   scanf("%d",&y);
   total_apples=m+(m+m1);
   total_oranges=n+(n+n1);
   printf("%d %d",(total_apples-x),(total_oranges-y));
   return 0;
   }