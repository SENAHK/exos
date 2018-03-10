#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void func(char *x, char *y) {
  while (*y) {
    *x++ = *y++;
  }
}

int main(){
  char *c = 'a';
  char *c2 = 'b';
  func(c, c2);
  printf("%c\n", c);
	return EXIT_SUCCESS;
}
