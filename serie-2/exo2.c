// Exercise 2, serie 2
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void CopyStr(char **dst, char *src){
  int length = strlen(src);
  *dst = malloc(length + 1);

  for (int i = 0; i < length; i++) {
    *(*dst+i) = *(src+i);
  }
}

int main(){
  char src[] = "fooo0a";
  char *copy;

  CopyStr(&copy, src);
  printf("%s\n", copy);
}
