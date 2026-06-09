//Update_r_product


#include<stdio.h>
int main(){
    int T,R,C;
    
    scanf("%d\n",&T);
    for(int i=1;i<=T;i++){
        scanf("%d %d",&R,&C);
        int a[R][C];
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=0;i<R;i++){
            int product=1;
            for(int j=0;j<C;j++){
                product=product*a[i][j];
            }
            for(int i=0;i<C;i++){
                printf("%d",product);
                if(i<C-1){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
    
    
}