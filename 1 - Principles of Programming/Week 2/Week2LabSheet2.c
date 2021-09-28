#include <stdio.h>
#include <math.h>
#include <stdbool.h>
/* 
 * Lab Sheet 2:
 */

/* Question 1: 
 
 Complete the function below which takes in an integer input between zero and one hundred (0 ≤ n ≤ 100) and prints out the number expressed in English text, with spaces and no dashes (–), e.g. for the number “33”, we would expect to see “thirty three”. Hint: you may want to create additional functions to help.
 
 Call this function from the main to test your program.
 */

void individualNumToText(int ones){
  if (ones == 1) {
    printf("one");
  }
  else if (ones == 2) {
    printf("two");
  }
  else if (ones == 3) {
    printf("three");
  }
  else if (ones == 4) {
    printf("four");
  }
  else if (ones == 5) {
    printf("five");
  }
  else if (ones == 6) {
    printf("six");
  }
  else if (ones == 7) {
    printf("seven");
  }
  else if (ones == 8) {
    printf("eight");
  }
  else if (ones == 9) {
    printf("nine");
  }
  else if (ones == 10) {
    printf("ten");
  }
  else if (ones == 11) {
    printf("eleven");
  }
  else if (ones == 12) {
    printf("twelve");
  }
}

void tensPrefixToText(int prefix){
  if (prefix == 2) {
    printf("twen");
  }
  else if (prefix == 3) {
    printf("thir");
  }
  else if (prefix == 4) {
    printf("for");
  }
  else if (prefix == 5) {
    printf("fif");
  }
  else if (prefix == 8) {
    printf("eigh");
  }
}

void numberToText(int value){
// Part 1: dealing with awkward cases 
// case 1: deal with 0 
  if (value == 0){
    printf("zero\n");
  }
  // case 2: deal with 100
  else if (value == 100){
    printf("one hundred\n");
  }

// Part 2: dealing with numbers 1 to 12 (basic building blocks)
   else if (value <= 12) {
    individualNumToText(value);
    printf("\n");
  }

// Part 3: dealing with numbers 13 to 99 (composite numbers)
  else {
// slicing into tens and ones 
int tens = value/10;
int ones = value%10;

// deal with 13 to 19 (where tens = 1)
if (tens == 1) {
      // deal with awkward cases (thirteen, fifteen, eighteen)
      if (ones == 3 || ones == 5 || ones == 8){
        tensPrefixToText(ones);
      }
      // deal with normal cases no modification needed
      // digit + 'teen'
      else {
        individualNumToText(ones);
      }
      printf("teen\n");
    }

// deal with 20 to 99 (more composite numbers)
    else {
      // deal with awkward cases (twenty, thirty, forty, fifty, eighty)
      if (tens <= 5 || tens == 8) {
        tensPrefixToText(tens);
      }
      else {
        individualNumToText(tens);
      }
      printf("ty ");
      individualNumToText(ones);
      printf("\n");
    }
  }
}

/* Question 2: 
 
 Complete the function below that calculates, and returns, the distance between two points.
 
 Call this function from the main to test your program. Hint: may wish to use the following print statement in your main function, or similar: 

 printf("%1.2f\n", calculateDistance(0, 0, 4, 3));
 */

double calculateDistance(int x1, int y1, int x2, int y2){
  // calculation: sqrt((x2-x2)^2 + (y2-y1)^2)
  int xDistance = x1 - x2;
  int yDistance = y1 - y2;
  return sqrt(pow(xDistance,2) + pow(yDistance,2));
}

/* Question 3: 
 
 Complete the function below that is given an integer, n, where 1 ≤ n ≤ 9999 and prints whether it is even, odd, or/and prime.  The output should be whole sentences for example, 

 1 is odd and not prime.
 2 is even and prime.
 3 is odd and prime.
 4 is even and not prime.
 5 is odd and prime
 
 Call this function from the main to test your program.
 */

 int getValueFromUser(void){
  int input;
  printf("Enter a value between 1 and 9999:");
  scanf("%d", &input);
  while (input < 1 || input > 9999){
  printf("Enter a value between 1 and 9999:");
  scanf("%d", &input);
  }
  return input;
}


bool IsEven(int n){
  // true = even, false = odd
  return (n % 2 == 0) ? true : false;
}

bool IsPrime(int n){
  // true = prime, false = not prime
  if(n <= 5) {
    return (n % 2 != 0) ? true : false;
  } else
    return (n % 6 == 1 || n % 6 == 5) ? true : false;
}

void printOddEvenAndOrPrime(int n){

  if (n >= 1 && n <= 9999) {
  printf("%d ", n);

  // check even or odd
    (IsEven(n)) ? printf("is even") : printf("is odd");

  printf(" and ");  

  // check prime
    (IsPrime(n)) ? printf("is prime") : printf("is not prime");

  }
}

int main(void) {
  // testing question 1
  printf("Question 1:\n");
  numberToText(8);
  numberToText(33);
  numberToText(48);
  numberToText(55);
  numberToText(99);

  // testing question 2
  printf("Question 2:\n");
  printf("The distance between the two points is: %1.2f\n", calculateDistance(0, 0, 4, 3));

  // testing question 3
  printf("Question 3:\n");
  printOddEvenAndOrPrime (getValueFromUser());
  return 0;
}
