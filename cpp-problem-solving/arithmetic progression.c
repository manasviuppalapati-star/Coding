//arithmetic progression


#include<stdio.h>
int main(){
    int a1,d,n,*p1,*p2,*p3;
    int sum;
    p1=&a1;
    p2=&d;
    p3=&n;
    scanf("%d \n %d \n %d",&a1,&d,&n);
    sum=(*p3)/2.0*(2*(*p1)+(*p3-1.0)*(*p2));
    printf("%d",sum);
    return 0;
}
