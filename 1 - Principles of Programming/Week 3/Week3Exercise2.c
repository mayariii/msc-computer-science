#include <stdio.h>

/* Modify the function below so that it populates the array evenNumbers with
 * calculated value rather than printing it out.  
 * 
 * Now create a function that prints out this evenNumbers array and call it from
 * the main function
 */

int evenNumbersSize = 10;
int evenNumbers[10];

void populateArray(){
  for(int i=0; i < evenNumbersSize; i++){
    // insert calculated even number at position i
    evenNumbers[i] = (i+1) * 2;
  }
}

void printArray(){
  for(int i=0; i < evenNumbersSize; i++){
    // print number at position i
    printf("%d\n", evenNumbers[i]);
  }
}

int main(void) {
  populateArray();
  printArray();
  return 0;
}
