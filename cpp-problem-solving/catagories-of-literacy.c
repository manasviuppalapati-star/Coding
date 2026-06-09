// To display different catagories of literacy 

#include<stdio.h>
int main()
{
    int totpop=0,menper=0,litper=0,mlitper=0,litpop=0;
    scanf("%d%d%d%d",&totpop,&litper,&menper,&mlitper);
    litpop=totpop*litper/100;
    printf("Men population=%d\nWomen population=%d\nLiterates=%d\nIlliterates=%d\nMen literates=%d\nWomen literates=%d\nMen illiterates=%d\nWomen illiterates=%d",(totpop*menper/100),totpop-(totpop*menper/100),litpop,totpop-litpop,(totpop*mlitper/100),litpop-(totpop*mlitper/100),(totpop*menper/100)-(totpop*mlitper/100),(totpop-(totpop*menper/100))-(litpop-(totpop*mlitper/100)));
}