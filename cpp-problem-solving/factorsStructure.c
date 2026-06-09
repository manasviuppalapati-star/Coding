#include<stdio.h>
void findFactor (int M, int arr[],int N){
    int *p;
    
    for(int i=0;i<N;i++){
        p=&arr[i];
        if((M%(*p))==0){
            printf("%d ",*p);
        }
    }
}
struct FactorFinder{
    int N;
    int arr[1000];
    int M;
    
};
int main(){
    struct FactorFinder F;
    scanf("%d",&F.N);
    for(int i=0;i<F.N;i++){
        scanf("%d",&F.arr[i]);
    }
    scanf("%d",&F.M);
    findFactor (F.M,F.arr,F.N);
    
}

