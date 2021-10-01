#include <stdio.h>
#include <string.h>

/* 
 * Modify the function below so that it copies the string from string1 into
 * string2 and prints out string2 in reverse.
 */

char string2[11]; // initialisation of string2 array

void copyAndPrintArray(char string1[]){
  // COPY
  // copy string1 into string2
  strcpy(string2, string1); 

   // PRINT
  printf("%s\n", string2);

  for(int i = strlen(string2); i >= 0; i--){
    printf("%c", string2[i]);
  }
}

int main(void) {
  char string1[11] = "my message"; // initialisation + assignment of string1 array
  copyAndPrintArray(string1);
  return 0;
}
