// bankQStr

#include<stdio.h>
int main (){
    int n,*p;
    p=&n;
    int dmon;
    int wdom;
    
    for(int i=0;i<=4;i++){
        scanf("%d",&n);
        if(*p==1|| *p==2 || *p==3 || *p==4){
            if(*p==1){
               scanf("%d",&dmon);
               printf("done\n");
            }
            else if(*p==2){
                scanf("%d",&wdom);
                printf("sucess\n");
                dmon=dmon-wdom;
            }
            else if(*p==3){
               printf("%d\n",dmon);
            }
            else{
               printf("exit");
            }
        
        }
        else{
            printf("invalid");
        }
    }
    return 0;
}