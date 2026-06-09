#include<stdio.h>
struct student{
    int rno;
    char name[50];
    int marks[6];
};
int main(){
    
    struct student s;
    int sum=0;
    scanf("%d ",&s.rno);
    scanf("%s",s.name);
    for(int i=0;i<6;i++){
        scanf("%d",&s.marks[i]);
        int mark=s.marks[i];
        sum=sum+mark;
    }
    float  avg=sum/6;
    
    for(int i=0;i<6;i++){
         int mark=s.marks[i];
        if(mark<50){
            printf("%d",sum);
            printf("%.2f\n",avg);
            printf("Fail");
            break;
        }
        else{
            printf("%d",sum);
            printf("%.2f\n",avg);
            printf("Pass\n");
            if(avg>=90 && avg<=100){
                printf("Grade = S and Grade Point = 10");
                break;
            }
            else if(avg>=80 && avg<=89){
                printf("Grade = A and Grade Point = 9");
                break;
            }
            else if(avg>=70 && avg<=79){
                printf("Grade = B and Grade Point = 8");
                break;
            }
            else if(avg>=60 && avg<=69){
                printf("Grade = C and Grade Point = 7");
                break;
            }
            else{
                printf("Grade = D and Grade Point = 6");
                break;
            }
        }
    }
    return 0;
}

