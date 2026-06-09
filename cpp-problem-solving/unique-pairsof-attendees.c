// To display the total number of unique pairsof attendees that can be formed
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int pairs=(num*(num-1))/2;
    printf("%d",pairs);
    return 0 ;
}

