/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float mark1,mark2,sum,ave;

  printf("Enter the two marks:");
  scanf("%f %f",&mark1,&mark2);

  sum = mark1 + mark2;
  ave = sum / 2.0;

  printf("Average = %f",ave);
  return 0;
}

