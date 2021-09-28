#include <stdio.h>

/* 
 * In the code below,
 * 
 * 1. change the value stored in n to 24
 *
 * Now, using the printf function in the stdio.h library (imported above),
 * 
 * 2. print out the value of n 
 * 3. change the value of n to 4 and in a new variable, 
 * store the value of n multiplied by 3 and print it out
 *
*/

int main(void) {
  // initialise number 
  int n = 24;
  // print first number
  printf("My first number is %d\n", n);
  // reassign number
  n = 4;
  // initialise storage variable for multiplied value
  int nMultiplied = n * 3;
  // print second number (multiplied)
  printf("My second number is %d\n",nMultiplied);
  
  return 0;
}
