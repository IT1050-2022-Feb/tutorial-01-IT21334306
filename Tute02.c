/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  
  int distance,amount;   //declare variables for input and output values  
  
  printf("Enter the distance : ");  // get the value of the distance
  scanf("%d",&distance);
	
  if(distance<=30)          //when the distance lower than 30km
  {
	  
    amount = 50 * distance;      // calculation
    printf("The amount to be paid : %d",amount);  // printing the output amount
  
  }
  else                  // when the distance bigger than 30km
  {
	  
    amount = 30 * distance + (distance - 30) *  40;  // calculation
    printf("The amount to be paid : %d",amount);   // printing the output amount
    
  }
	
  return 0;
}
