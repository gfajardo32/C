#include <stdio.h>
/*This program calculates your weight on different planets based on your Earth weight.
*It uses a switch statement to determine the correct multiplier for each planet.
*Author: Guido Fajardo
*Date: 09/02/2025
*/
int main() {
  // Declare variables
double weight;
int destination;
double dWeight;

// Get user input
printf ("What is your weight at Earth?\n");
scanf ("%lf", &weight);
printf ("Enter a number for your planet destination.\n");
printf ("1	Mercury \n2	Venus	\n3	Mars	\n4	Jupiter	\n5	Saturn	\n6	Uranus	\n7	Neptune	\n");
scanf ("%d", &destination);


// Calculate weight on different planets
switch (destination) {
  case 1:
    dWeight = weight * 0.38;
    printf("In Mercury your weight will be %.2f.\n", dWeight);
    break;
  case 2:
    dWeight = weight * 0.91;
    printf("In Venus your weight will be %.2f.\n", dWeight);
    break;
  case 3:
    dWeight = weight * 0.38;
    printf("In Mars your weight will be %.2f.\n", dWeight);
    break;
  case 4:
    dWeight = weight * 2.34;
    printf("In Jupiter your weight will be %.2f.\n", dWeight);
    break;
  case 5:
    dWeight = weight * 1.06;
    printf("In Saturn your weight will be %.2f.\n", dWeight);
    break;
  case 6:
    dWeight = weight * 0.92;
    printf("In Uranus your weight will be %.2f.\n", dWeight);
    break;
  case 7:
    dWeight = weight * 1.19;
    printf("In Neptune your weight will be %.2f.\n", dWeight);
    break; 
  default:
    printf("Error destination not in list!");
    break;       
}
}