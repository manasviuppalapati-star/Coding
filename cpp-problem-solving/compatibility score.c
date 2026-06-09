// To display the compatibility score
#include<stdio.h>
int main(){
    int gear1,gear2,gear3,gear4,sum,diff,product;
    scanf("%d %d %d %d",&gear1,&gear2,&gear3,&gear4);
    sum=gear1+gear2;
    product=gear1*gear2*gear3*gear4;
    diff=gear3-gear4;
    (sum==10 && diff==3) ? printf("%d",product) :printf("not satisfied");
    return 0;
}
