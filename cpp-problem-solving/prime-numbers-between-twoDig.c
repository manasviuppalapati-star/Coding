//The output prints a list of prime numbers between the given two values, separated by a space.


#include<stdio.h>
int main(){
    int n1,n2,i,j,flag;
    scanf("%d%d",&n1,&n2);
    for (i=n1;i<=n2;i++){
        if(i<2){
            continue;
        }
        flag=1;
        for(j=2;j*j<=i;j++){
            if(i%j ==0){
                flag=0;
                break;
            }
        }
        if (flag){
            printf("%d\n",i);
        }
    
    }
    return 0;
}