#include <stdio.h>

/*
 * Complete the fibonacci function below such that it calculates the 
 * nth term of the Fibonacci sequence using iteration.
 * 
 * The first 4 terms of the Fibonacci sequence in this example 
 * are  1, 1, 2, 3
 *
 * For example if we call fibonacci(1) we should get the value 1 returned,
 * if we call fibonacci(4) we should get the value 3 returned. 
 */

int fibonacci(int term){
  int previous = 0;
  int current = 1;
  int next;
  
  for (int count = 1; count < term; count++){
    next = previous + current;
	  previous = current;
	  current = next;
	}
	return current;
}

int main(void) {
  printf("%d\n",fibonacci(1));
  printf("%d\n",fibonacci(4));
  return 0;
}
