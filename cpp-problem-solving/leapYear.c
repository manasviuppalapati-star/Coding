//The output displays the leap years within the given range (both inclusive) in separate lines.

#include<stdio.h>
int main(){
    int s,e,i;
    scanf("%d%d",&s,&e);
    for(i=s;i<=e;i++){
    if(i%4!=0 || (i%100==0 && i%400!=0))
        continue;
      printf("%d\n",i);
    }
    return 0;
}