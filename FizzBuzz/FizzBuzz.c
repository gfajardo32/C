#include <stdio.h>
/*This program prints the numbers from 1 to 100.
*For multiples of three, it prints "Fizz" instead of the number.
*For multiples of five, it prints "Buzz".
*For numbers which are multiples of both three and five, it prints "FizzBuzz".
*Author: Guido Fajardo
*Date: 09/04/2025
*/

// Main function
int main() {
    // Loop through numbers 1 to 100
  for (int i = 1; i<= 100; i++) {

    // Check divisibility and print appropriate output
    if (i % 3 == 0 && i % 5 == 0) {  // Divisible by both 3 and 5
      printf("FizzBuzz\n");
    } else if (i % 5 == 0){     // Divisible by 5
        printf("Buzz\n");
    } else if (i % 3 == 0) {    // Divisible by 3
        printf("Fizz\n");
    } else {
      printf("%d\n", i);        // Print the number if not divisible by 3 or 5
    }
  }
  return 0; // Indicate successful completion
}
