/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,sum=0,avg=0;
  printf("input the marks of subject 1 : ");
  scanf("%d",&mark1);
  printf("input the marks of subject 2 : ");
  scanf("%d",&mark2);
  sum=mark1+mark2;
  printf("total of marks : %d",sum);
  avg=sum/2;
  printf("\n\n");
  printf("average of the two subjects is : %d",avg);
  return 0;
}

