#include <stdio.h>

/* 
 Modify the function below so that it prints out the square multiplication tables for any number.  How might you modify this function, or add a new function, so it prints out the multiplication tables for any range of numbers?

 */

// function to print single line of table
// generalised to take in any integer (n) and number of columns
void printMultiples(int n, int numOfColumns){
  int i = 1;
    while (i <= numOfColumns){
        int multiple = i * n; // generalised line to take input n
        printf ("%d\t", multiple);
        i = i + 1;
    }
  printf ("\n");
}

void squareMultTable(int numOfRows){
  int count = 1;
  int numOfColumns = numOfRows; // to make table square
    while(count <= numOfRows){ // encapsulating loop to print multiple rows
        printMultiples(count, numOfColumns); 
        count = count + 1;
    }
}

int main(void) {
  squareMultTable(10);
  return 0;
}
