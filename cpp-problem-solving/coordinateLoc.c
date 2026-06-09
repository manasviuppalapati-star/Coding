//The output displays the string, representing the quadrant in which the coordinate lies.

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (a==0 && b==0){
        printf("Origin");
        
    }
        else if( a>0 && b>0){
            printf("Ist Quadrant");
        }
        else if( a<0 && b<0){
            printf("IIIrd Quadrant");
        }
        else if( a<0 && b>0){
            printf("IInd Quadrant");
        }
        else{
            printf("IVth Quadrant");
        }
    return 0;
    
}