// to display name,age,height 
#include<stdio.h>
int main(){
    char name;
    int age;
    float height;
    scanf("%c %d %f",&name,&age,&height);
    printf("Initial: %c\n Age: %d years\n Height: %.2f meters",name,age,height);
    return 0 ;
}
