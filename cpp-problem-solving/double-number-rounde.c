// to display a double number rounded to 1,2,3 decimal places
#include<stdio.h>
int main(){
    double num;
    scanf("%lf",&num);
    printf("%.1lf\n",num);
    printf("%.2lf\n",num);
    printf("%.3lf\n",num);
    return 0 ;
}
