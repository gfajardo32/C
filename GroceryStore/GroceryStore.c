#include <stdio.h>

/* This project is used to practice using variables, operators, and conditionals in C.
* Its a grocery store scenario where you will need to declare and use variables to track
* the price, quantity, location, and reviews of apples in a grocery store.
* You will also need to use operators to update the reviews and customers variables
* and a conditional to determine if there is a sale on apples today.
*author: Guido Fajardo
*date: 08/28/25
*/


// This is the main function where the program starts executing
int main() {
  
 int appleQuantity;
 double applePrice = 1.49;
 int appleCustomers;
 double appleReview;
 int appleReviewDisplay;
 const char appleLocation = 'F';
 int dayOfWeek = 6;

 appleQuantity = 23;
 appleCustomers = 9;
 appleReview = 823;

 appleReview += 52;
 appleCustomers += 1;
 appleReview = appleReview / appleCustomers;
 appleReviewDisplay = appleReview;



 dayOfWeek += 10;

 // Uses a conditional to determine if there is a sale on apples today
 if(appleQuantity < 10 || dayOfWeek % 7 == 3)
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }

//This prints out all the information about the apples in the grocery store
 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}