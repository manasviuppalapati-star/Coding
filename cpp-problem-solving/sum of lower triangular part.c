//sum of lower triangular part

#include<stdio.h>
int main(){
    int r,sum=0;
    scanf("%d",&r);
    int a[r][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&a[i][j]);
        
            if(i>j){
               sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
    
    return 0;
}
