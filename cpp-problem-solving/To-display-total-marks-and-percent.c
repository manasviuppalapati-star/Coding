#include<stdio.h>
int main()
{
    int e, h, m, s, c, total;
    float per;
    scanf("%d",&e);
    scanf("%d",&h);
    scanf("%d",&m);
    scanf("%d",&s);
    scanf("%d",&c);
    total = e + h + m + s + c;
    per=total/5.0;

    printf("Total: %d",total);
    printf("\nPercentage: %.2f",per);
    return 0;
}

