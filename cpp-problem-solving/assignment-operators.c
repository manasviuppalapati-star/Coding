// usage of assignment operators
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    a-=2;
    b+=b;
    c*=c;
    printf("%d\n%d\n%d",a,b,c);
    return 0 ;
}
