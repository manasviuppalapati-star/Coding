//no of negnum


#include<stdio.h>
int main(){
    int n,negNum=0,i;
    scanf("%d",&n);
    int a[n],*p;
    
    for ( i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    
    for ( i=0;i<n;i++){
    	p=&a[i];
        if(*p<0){
            negNum++;
            printf("%d",*p);
            p=p+1;
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
