//no of negnum


#include<stdio.h>
int main(){
    int n,negNum=0,i;
    scanf("%d",&n);
    int a[n];
    for ( i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    
    for ( i=0;i<n;i++){
        if(a[i]<0){
            negNum++;
        }

    }
    if(negNum>0){
        printf("Total negative elements in array = %d",negNum);
    }
    else{
        printf("No negative elements in the array");
    }
    return 0;
        
    
}
