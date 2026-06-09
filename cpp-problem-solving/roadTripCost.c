// to find the total cost of road trip
#include<stdio.h>
int main(){
    int miles,gas,parking,toll;
    double avgMiles;
    float totalCost;
    scanf("%d\n%d\n%lf\n%d\n%d",&miles,&gas,&avgMiles,&parking,&toll);
    totalCost=(miles/avgMiles)*gas+parking+toll;
    printf("%.2f",totalCost);
    return 0;
}
