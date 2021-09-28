#include <stdio.h>

/*
 * The code below contains some errors.
 *
 * Debug the code to get it to run.
 * 
 * Question: what types of errors have been made? logical, runtime or syntax?
*/

// this function takes a double n and returns n multiplied by itself 
int my_function(double n){
  double n2 = n*n; // syntax error - missing semi-colon
  return n2; // logical error - originally returned passed in value (n), but needs to return processed value (n2)
}

int main(void) {
  int value = 42; // syntax error - missing semi-colon
  double processed_value = my_function(value);
  printf("The initial value was %d", value); 
  printf(" and the processed value is %f\n", processed_value);  // logical error - format specifier defined integer (d) but needed double (f)
  return 0;
}
