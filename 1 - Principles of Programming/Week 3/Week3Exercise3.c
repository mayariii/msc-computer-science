#include <stdio.h>

/*
 * Modify the function below so that it prints out each character in the string
 * on a new line.  Hint: the end of a string is signified by the '\0' char
 */

void printCharsInString(char string[]){
  // iterate through the given string
  // until the counter reaches the null character
  for(int i=0; string[i] != '\0'; i++){
    printf("%c\n", string[i]);
  }
}

int main(void) {
  char my_string[] = "This is a string";
  printCharsInString(my_string);
  return 0;
}
