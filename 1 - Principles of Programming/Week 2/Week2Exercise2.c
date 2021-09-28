#include <stdio.h>

/*
 * Create a function that contains a local variable n.  Initialise this variable to 
 * 100 and print to the screen the value of n*n.  
 * 
 * Modify your code so that you can print out the result of this calculation
 * in the main function?  Do this both via a return in the function you have defined
 * and by using a global variable.
*/
int n = 100; // global variable declaration

int square() {
  int n = 100; // local variable declaration
  int result = n * n;
  return result;
}

int main(void) {
  printf("Using local variable: %d\n", square());
  printf("Using global variable: %d\n", n * n);
  return 0;
}
