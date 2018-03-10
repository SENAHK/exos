#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// Exercice 1, serie 2
int main(){
  long n = 15;
  long *p = &n;
  long **pp = &p;

  // prints memory address of p
  printf("p: %p\n", p);
  // prints memory address of pp
  printf("pp: %p\n", pp);

  // prints value of p -> value of n
  printf("*p: %ld\n", *p);
  // prints value of pp -> value of p -> memory address of p
  printf("*pp: %p\n", *pp);

  // prints value of value of pp
  // value of pp is p, value of p is n -> prints 15
  printf("**pp: %ld\n", **pp);
}
