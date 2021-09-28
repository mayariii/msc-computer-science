#include <stdio.h>
#include <math.h>

/*
 * Using the math.h library (imported already), 
 * 
 * 1. Complete the pow3 function below so that takes as an argument a double and 
 * returns that value raised to the power of 3 
 * (hint use the pow function in the math library)
 *
 * 2. Create a function that takes as an argument a double and return the natural log 
 * of that value.  
 *
 * Demonstrate your functions by calling them the main function and printing out the
 * values returned 
*/

double pow3(double value){
  double result = pow(value, 3);
  printf("Input ^ 3: %.2f\n", result);
  return result;
}

double logn(double value){
  double result = log(value);
  printf("Natural log of input: %f\n", result);
  return result;
}

int main(void) {
  // test pow3 function
  pow3(3);
  
  // test natural log function
  logn(1.5);
  
  return 0;
}
