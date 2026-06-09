//sum of its odd digits 


#include<stdio.h>
int main(){
    int  n,*p,r,sum=0;
    p=&n;
    scanf("%d",&n);
    
    while((*p)>0){
        r=(*p)%10;
        if(r%2!=0){
           sum=sum+r; 
        }
        *p=*p/10;
        
    }
    printf("%d",sum);
    return 0;
    
}
