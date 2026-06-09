// calculating water tax by using the conditions

#include<stdio.h>
#include<math.h>
int main()
{
    double units=0;
    scanf("%lf",&units);
    (units<=500)?((units<100)?printf("%.2f",units):printf("%.2f",units*1.5)):printf("%.2f",units*3);
    return 0;
}