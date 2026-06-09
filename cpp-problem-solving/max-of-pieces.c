// To display max no of pieces that can be formed by n cuts
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int pieces=(n*(n+1))/2+1;
    printf(" %d\n",pieces);
    return 0 ;
}
