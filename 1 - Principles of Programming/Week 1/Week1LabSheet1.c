#include <stdio.h>
#include <math.h>

void printHelloWorld(void);
void printXTenTimes(void);
void convertMetricToImperialHeights(void);
void fibonacci(void);
void volumeOfACylinder(void);

int main(void) {
  printf("Question 1\n");
  printHelloWorld();

  printf("\nQuestion 2\n");
  printXTenTimes();

  printf("\nQuestion 3\n");
  convertMetricToImperialHeights();

  printf("\nQuestion 4\n");
  fibonacci();

  printf("\nQuestion 5\n");
  volumeOfACylinder();
  return 0;
}

/* 
 * Lab Sheet 1:
 */

 /* Question 1: 
 
 Adapt the “HelloWorld” code below to produce a program that defines a variable capable of holding an integer of your choice. The program should add 3 to that number, multiply the result by 2, subtract 4, subtract twice the original number, add 3, then print the result and a new line.
 */
 
void printHelloWorld(void){
  printf("Hello World\n");

  // get input from user
  printf("Pick an integer! What number have you chosen?\n");
  int myNum; // initialise input variable
  scanf("%d", &myNum); // read user input
  
  // process number
  int result = ((((myNum + 3) * 2) - 4) - (myNum * 2) + 3); 

  // print result
  printf("Your processed number is: %d \n", result);
}

 /* Question 2: 
 
 Complete the function below so that it prints every integer from x to x + 10.  Do not use loops. 
 
 Call this function from the main to test your program.
 */

void printXTenTimes(void){

  // get input from user
  printf("Enter an integer:\n");
  int x; // initialise input variable
  scanf("%d", &x); // read user input
  // initialise incrementor variable
  int inc = 1;
  printf("Printing x to x +10:\n");
  printf("%d\n", x);
  printf("%d\n", x + inc++);
  printf("%d\n", x + inc++);
  printf("%d\n", x + inc++);
  printf("%d\n", x + inc++);
  printf("%d\n", x + inc++);
  printf("%d\n", x + inc++);
  printf("%d\n", x + inc++);
  printf("%d\n", x + inc++);
  printf("%d\n", x + inc++);
  printf("%d\n", x + inc++);
}

 /* Question 3: 
 
 Complete the function below so that it converts the height of a person from centimetres to feet and inches. Use integer division (rounding down is acceptable, which is the default for integer division). 
 
 Hint: 254 cm is exactly 100 inches and 12 inches is exactly 1 foot. 
 
 Call this function from the main to test your program.  For example you could test your program with the follow five values, where "?" replaced with the true value.

 101 cm is 3 feet 3 inches to the nearest inch.
 3 cm is 0 feet 1 inches to the nearest inch.
 15 cm is ? feet ? inches to the nearest inch.
 192 cm is ? feet ? inches to the nearest inch.
 124 cm is ? feet ? inches to the nearest inch.
 */

void convertMetricToImperialHeights(void){
  // get input from user
  printf("Enter your height in centimetres (cm):\n");
  int heightInCm; // initialise input variable
  scanf("%d", &heightInCm); // read user input

  // convert height to feet and inches
  int heightInInches = (heightInCm * 100) / 254;
  int heightInFeet = heightInInches / 12;
  int heightInInchesWithFt = heightInInches - (heightInFeet * 12);
  // print result
  printf("%d cm is %d feet %d inches rounded down to the nearest inch\n", heightInCm, heightInFeet, heightInInchesWithFt);
}

 /* Question 4: 
 
 Complete the function below so that it uses three variables (current, previous, next) to calculate and print out the first ten numbers of the Fibonacci sequence, each on a new line: i.e. the first four lines should be as follows:

 0 
 1 
 1 
 2
 
 Call this function from the main to test your program.
 */

 void fibonacci(void){
   // initialise starting numbers
   int previous = 0;
   int current = 0;
   int next = 1;
   int step = 1;

  // done without control flow statements

  printf("Step %d: %d\n", step, current); // P=0, C=0, N=1
  step++;
  current = next; // P=0, C=1, N=1
  next = previous + current; // P=0, C=1, N=1
  printf("Step %d: %d\n", step++, current); // P=0, C=1, N=1

  previous = current; // P=1, C=1, N=1
  current = next; // P=1, C=1, N=1
  next = previous + current; // P=1, C=1, N=2
  printf("Step %d: %d\n", step++, current); // P=1, C=1, N=2

  previous = current; // P=1, C=1, N=2
  current = next; // P=1, C=2, N=2
  next = previous + current; // P=1, C=2, N=3
  printf("Step %d: %d\n", step++, current); // P=1, C=2, N=3

  previous = current; // P=2, C=2 N=3
  current = next; // P=2, C=3, N=3
  next = previous + current; // P=2, C=3, N=5
  printf("Step %d: %d\n", step++, current); // P=2, C=3, N=5

  previous = current; 
  current = next; 
  next = previous + current; 
  printf("Step %d: %d\n", step++, current);

  previous = current; 
  current = next; 
  next = previous + current; 
  printf("Step %d: %d\n", step++, current);

  previous = current; 
  current = next; 
  next = previous + current; 
  printf("Step %d: %d\n", step++, current);

  previous = current; 
  current = next; 
  next = previous + current; 
  printf("Step %d: %d\n", step++, current); 

  previous = current; 
  current = next; 
  next = previous + current; 
  printf("Step %d: %d\n", step++, current);
 }

 /* Question 5: 
 
 Complete the function below so that it uses two variables: height and radius. Use these two variables and print to the screen, the volume of a cylinder. 

 Call this function from the main to test your program.  For example, you could test your program with the following values, 

 height 7.0cm and radius 4.0cm
 height 20.0cm and radius 3.0cm
 height 14.7cm and radius 5.2cm
 
 Which prints out, the cylinder with height 7.0cm and radius 4.0cm has a volume of 351.86cm^3
 
*/

void volumeOfACylinder(void){
  // get height from user
  printf("Enter height in cm:\n");
  double height; // initialise input variable
  scanf("%lf", &height); // read user input
  // get radius from user
  printf("Enter radius in cm:\n");
  double radius; // initialise input variable
  scanf("%lf", &radius); // read user input

  // calculate volume
  double volume = M_PI * (radius * radius) * height;

  // print result to 2 d.p.
  printf("The cylinder with height %.2lfcm and radius %.2lfcm has a volume of %.2lfcm^3\n", height, radius, volume);
}
