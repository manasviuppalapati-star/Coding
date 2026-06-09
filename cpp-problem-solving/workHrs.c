// to find work hrs in week days and in weekends

#include<stdio.h>
int main()
{
    int sal,h;
    scanf("%d",&sal);
    h=(sal-800)/130;
    printf("Number of weekday hours is %d\nNumber of weekend hours is %d",h+10,h);
    return 0;
}