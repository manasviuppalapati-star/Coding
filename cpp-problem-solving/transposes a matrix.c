//transposes a matrix

#include<stdio.h>
int main(){
    int br,bc;
    scanf("%d %d",&br,&bc);
    int a[br][bc];
    for(int i=0;i<br;i++){
        for(int j=0;j<bc;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    
    
    for(int i=0;i<bc;i++){
        for(int j=0;j<br;j++){
            printf("%d",a[j][i]);
        
            if(j<br-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
    
}
