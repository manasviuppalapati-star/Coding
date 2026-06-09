\\rainfall each month, separated by space.


#include<stdio.h>
int main()
{
    int rainfall[15],i,sum=0,avg,min,max,lowmonth=1,highmonth=1,flag=0;
    for(i=0;i<12;i++)
    {
        scanf("%d",&rainfall[i]);
        sum += rainfall[i];
        if(rainfall[i]<0)
            flag=1;
    }
    avg = (sum/12);
    min=rainfall[0];
    for(i=1;i<12;i++)
    {
    if(min> rainfall[i])
    {
    min= rainfall[i];
    lowmonth=i+1;
    }
}
max=rainfall[0];
for(i=1;i<12;i++)
{
    if(max < rainfall[i])
    {
    max= rainfall[i];
    highmonth=i+1;
    }
}
if(flag==0){
    printf("Total rainfall : %d\n",sum);
    printf("Average rainfall : %d\n",avg);
    printf("Lowest rainfall month : %d\n",lowmonth);
    printf("Highest rainfall month : %d",highmonth);
}
else
    printf("Invalid input");
return 0;
}