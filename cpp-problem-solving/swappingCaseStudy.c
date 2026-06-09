// to print values before swapping and after swapping
#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c;// they gave us to take values as a,b,c
    scanf("%f %f",&a,&b);
    a=fminf(fmaxf(a,1.0f),100.0f);// clamp between 1.0 and 100.0
    b=fminf(fmaxf(b,1.0f),100.0f);// clamp between 1.0 and 100.0

    printf("before swapping: %.2f %.2f  \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping: %.2f %.2f \n",a,b);
    return 0 ;
    
    
}