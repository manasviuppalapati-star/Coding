//Greater_Lesser_Divisible

#include<stdio.h>
int main(){
    int N,greater=0,lesser=0,divisible=0;
    scanf("%d",&N);
    int a[N];
    int S;
    

    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&S);
    for(int i=0;i<N;i++){
        if(a[i]>S){
            greater++;
        }
        if(a[i]<S){
            lesser++;
        }
        if(a[i]%S==0){
            divisible++;
        }
    }
    printf("Greater : %d\n",greater);
    printf("Lesser : %d\n",lesser);
    printf("Exactly divisible : %d\n",divisible);
    return 0;
}
