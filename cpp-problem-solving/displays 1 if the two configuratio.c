// displays 1 if the two configurations differ by only one switch being toggled, otherwise print 0.


#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int diff=a^b;
    if (diff !=0 && (diff & (diff-1))==0){
        printf("Result:1\n");
    }
     else {
         printf("Result:0\n");
     }
     return 0 ;
}

