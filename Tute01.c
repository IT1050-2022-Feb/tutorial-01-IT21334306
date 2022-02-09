/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int a, b, avg;
   
   printf("Enter the mark od first subject : ");
   scanf("%d",&a);
   
   printf("Enter the marks of second subject : ");
   scanf("%d",&b);
   
   avg = (a+b)/2;
   
   printf("The average mark is : %d",avg);
  
  return 0;
}

