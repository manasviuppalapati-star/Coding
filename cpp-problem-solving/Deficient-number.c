//The output prints "Deficient number", "Perfect number" or "Abundant number" based on the mentioned 
//criteria.


#include<stdio.h>

int findType(int *a){
    int i,j=0;
    for(i=1;i<=*a/2;i++){
        if(*a%i==0)
            j=j+i;
    }
    if(j==*a)
        return 0;
    else if(j>*a)
        return -1;
    else
        return 1;
}

int main(){
    int num;
    scanf("%d",&num);
    if(findType(&num)==0)
        printf("Perfect number");
    else if(findType(&num)==1)
        printf("Deficient number");
    else
        printf("Abundant number");
    return 0;
}