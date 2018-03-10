#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Returns length of a string
int StringLength(char *str){
  int cpt = -1;
  char *current;

  do{
    cpt++;
    current = str + cpt;
  }while(*current);

  return cpt;
}

int main(){
  char chaine[] = "1";
  printf("%d\n", StringLength("12345"));
  printf("%d\n", StringLength(chaine));
  printf("%d\n", StringLength("0"));
  printf("%d\n", StringLength(""));
  printf("%d\n", StringLength(" "));
}
