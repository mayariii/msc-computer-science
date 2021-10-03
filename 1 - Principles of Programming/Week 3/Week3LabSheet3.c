#include <stdio.h>
#include <string.h>
#include <math.h>

  /* 
  * Lab Sheet 3
  */

  /* Question 1
  
  Complete the function below which converts a hexadecimal string into its decimal value. (Do not use a C standard library function.) 

  The main function calls this function with an example hexadecimal value. Change this value to test your program.
  */

// Part 1 - create struct for KVP
struct KeyValuePair{
  char key;
  int value;
};

// Part 2 - create struct for dictionary
struct HexToDecDictionary{
    int size; // this is used to position next entry (head variable)
    struct KeyValuePair kvp[16]; // using the KVP struct we made before
};

struct HexToDecDictionary h2d; // initialise global variable for dictionary instance


// Part 3 - create function to look after the insertion (putting) of values into the dictionary
// 1. takes key and value as two seperate args
// 2. creates new KVP based on KVP struct
// 3. puts it into the next space in array 
void put(char key, int value){ // 1
    int next = h2d.size;

    struct KeyValuePair x; // 2
    x.key = key;
    x.value = value ;

    h2d.kvp[next] = x; // 3
    h2d.size = h2d.size + 1; // move head variable to next position in array
}

// fill the dictionary with our hex to decimal KVPs
void createHexToDecDictionary(void) { 
  put('0',0);
  put('1',1);
  put('2',2);
  put('3',3);
  put('4',4);
  put('5',5);
  put('6',6);
  put('7',7);
  put('8',8);
  put('9',9);
  put('A',10);
  put('B',11);
  put('C',12);
  put('D',13);
  put('E',14);
  put('F',15);
}

// Part 4 - create function to look after the retrieval (getting) of values 
// 1. takes in key we want to find
// 2. uses iteration to go over the entries store in the dictionary
// 3. uses linear search through each entry - if value found return it, if not found, return 0 (checks one, moves to the next)
int get(char keyToFind){ // 1
    for (int i=0; i < h2d.size; i++){ // 2
        if(h2d.kvp[i].key == keyToFind){ // 3
            return h2d.kvp[i].value;
        }
    }
    return 0;
}

// ** MAIN FUNCTION ** converts numbers from hexadecimal (base 16) to decimal (base 10)
int hexToDec(char hex[]){
  createHexToDecDictionary();
  int result;
  int hexLength = strlen(hex);

  // to convert hexadecimal to decimal
  // 1. multiply the hex number by 16 (the base)
  // 2. raise it to a power of 0 and increase that power by 1 each time according to the hexadecimal number equivalent 
  for(int power = 0; power < hexLength; power++){ // 2
    result = (result * 16) + get(hex[power]); // 1
  }
  return result;
}

/* Question 2
 Complete the function below that print out a tree shape such as the following: 

    *
   ***
  *****
 *******
*********
   ***
   ***
   ***
   ***

  Note you can (and probably should) implement additional functions to help.

  You can assume that the width of the tree will be odd and hence every line will have an odd number of asterisks. The trunk will always have a width of three.

  Call this function from the main to test your program.
*/

void printTreeTop(int treeTopHeight){

  // outer loop prints each row of * chars
  for(int i = 0; i < treeTopHeight; i++){ 
    // inner loop prints each individual * depending on the row requirements
    for(int j = 0; j < (2 * treeTopHeight) - 1; j++){ 
    (j < (treeTopHeight - 1 - i) || (treeTopHeight - 1 + i) < j) ? printf(" ") : printf("*");
    }
    printf("\n");
  }
  
}

void printTreeBase(int treeTopHeight, int trunkLength){
  // outer loop prints each row of * chars
  for (int i = 0; i < trunkLength; i++){ 
    // inner loop prints each individual * depending on the row requirements
    for(int j = 0; j < (2 * treeTopHeight) - 1; j++){
      ((j < (treeTopHeight - 2) || treeTopHeight < j) ? printf(" ") : printf("*"));
    }
    printf("\n");
  }
}

void printTree(int width, int trunkLength){
  // work out the height of the tree depending on width
  int treeTopHeight = (width + 1) / 2;
  // tree assembly 
  printTreeTop(treeTopHeight);
  printTreeBase(treeTopHeight, trunkLength);
}

int main(void) {
  printf("Question 1: Hex to Dec Converter\n");
  char hex[4] = "FF3";
  printf("The hex value %s is %d in decimal\n", hex, hexToDec(hex));
  printf("\n");
  printf("Question 2: Tree printer\n");
  printTree(9, 4);
  return 0;
}
