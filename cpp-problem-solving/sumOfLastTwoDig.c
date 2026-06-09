//The output displays the sum of the last two digits of the input integer.


#include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int rem1=n%10;
 int q=n/10;
 int rem2=q%10;
 printf("%d",rem1+rem2);
}