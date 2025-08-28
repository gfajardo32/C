#include <stdio.h>

int main() {
  int appleQuantity;
  float applePrice;
  double appleReview;
  float appleReviewDisplay;
  const char APPLELOCATION = 'F';

  applePrice = 1.49;
  appleQuantity = 23;
  appleReview = 82.5;
  appleReviewDisplay = (int)appleReview;




// Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, APPLELOCATION, (int)appleReviewDisplay);

}
