//The output displays "Grade: " followed by the grade for the given mark based on the given criteria.

#include <stdio.h>

int main() {
   int mark;
   scanf("%d", &mark);
   if (mark >= 90 & mark <= 100) {
      printf("Grade: A");
   } 
   else if (mark >= 80 && mark <= 89) {
      printf("Grade: B");
   } 
   else if (mark >= 70 && mark <= 79) {
      printf("Grade: C");
   } 
   else if (mark >= 60 && mark <= 69) {
      printf("Grade: D");
   } 
   else if (mark >= 45 && mark <= 59) {
      printf("Grade: E");
   } 
   else if (mark >= 0 && mark < 45){
      printf("Grade: F");
   }
   else{
        printf("Invalid input");
    }
   return 0;
}