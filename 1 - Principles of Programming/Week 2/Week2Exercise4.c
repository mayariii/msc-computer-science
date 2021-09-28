#include <stdio.h>

/* 
 * Complete the recursive function below which performs multiplication of two 
 * numbers without using the inbuilt * sign
 */

int multiply(int number, int by){
  if (by == 0){ // IF base case, SOLVE
    return 0;
  } else { // ELSE reduce by recursion
    return number + multiply(number, by - 1);
  }
}

int main(void) {
  printf("The multiplication of 2 by 3 is %d\n", multiply(2,3));
  return 0;
}
