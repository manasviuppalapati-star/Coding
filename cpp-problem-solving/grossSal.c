// To print "gross Salary=" followed by a double value representing Shyams gross salary

#include<stdio.h>
int main() {
    int bs,da,ta;
    scanf("%d",&bs);
    da=(10.0*bs)/100.0;
    ta=(12.0*bs)/100.0;
    double gs=bs+da+ta;
    printf("Gross Salary = %.2lf",gs);
}