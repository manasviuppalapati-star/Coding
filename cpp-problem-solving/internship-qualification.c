//Write a program to determine if a student qualifies for the internship based on these criteria.


#include <stdio.h>

int main() {
  int cgpa;
  float score;
  scanf("%d",&cgpa);
  scanf("%f",&score);
  (cgpa>=6)?(score>=50.5)?printf("Eligible for Next Round"):printf("Try again"):printf("Not Eligible");
  return 0;
}