//Returning a Random array from the function using pointers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 6
/* function to generate and return random numbers between 0 to scale. */
int * getRandom(int scale) {

 static int r[n];
 srand(time(0));   //seed for the random number generator
  for (int i = 0; i < n; ++i) {
      r[i] = rand() %scale +1;
      printf("%d\n", r[i] );
   }
  return r;
}
 
/* main function to call above defined function */
int main () {

   /* a pointer to an int */
   int *p=NULL;
   p = getRandom(100);
	
  for (int i = 0; i < n; i++ ) 
       printf("*(p + [%d]) : %d\n", i, *(p + i) );
 
   return 0;
}
