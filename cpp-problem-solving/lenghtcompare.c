//lenghtcompare



#include<stdio.h>
#include<string.h>
int main(){
    char str1[21];
    char str2[21];
        scanf("%20s\n",&str1);
        scanf("%20s\n",&str2);
        

    int len1=(int) strlen(str1);
    int len2=(int) strlen(str2);
    int compare=strcmp(str1,str2);
    printf("Length of Str1 is %d\n",len1);
    printf("Length of Str2 is %d\n",len2);
    if(compare==0){
        printf("The strings are the same\n");
    }
    else{
        printf("The strings are not the same\n");
    }
    return 0;
}