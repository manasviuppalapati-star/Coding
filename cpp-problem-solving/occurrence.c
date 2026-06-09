//occurrence

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    int srch_num,c=0;
    scanf("%d",&srch_num);
    for(int i=0;i<n;i++){
        if(a[i]==srch_num){
            c++;
        }
    }
    if(c>0){
       printf("%d",c);
    }
    else{
        printf("No such element found in the array.");
    }
    return 0;
}
