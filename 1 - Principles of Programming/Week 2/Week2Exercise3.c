#include <stdio.h>
#include <stdbool.h>

/*
 * Write a function which returns true if a number is divisible by 3 and  
 * false if it is not.  Hint: use the modulo (%) operator.
 *
 * Modify your code so that your function now returns true if a number is divisible 
 * by 3 or 5 and false if it is not.
 *
*/

bool isDivisibleBy3Or5(int n){
  // if remainder is 0 with modulus of 3 or 5, return true 
  if (((n%3) == 0) || ((n%5) == 0)) {
    return true;
  }
  else {
    return false;
  }
}

int main(void) {
  printf("Is value divisible by 3 or 5? (1 = true, 0 = false): %d\n",isDivisibleBy3Or5(5));
  return 0;
}

