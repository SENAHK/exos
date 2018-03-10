#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Str_t{
  char *first;
  char subs;
};

typedef struct Str_t Str;

// Replace spaces in a string
void ReplaceSpaces(Str *chaine){
  // Pointer to iterate through the string argument
  char *current;
  int cpt = 0;

  do {
    current = chaine->first+cpt;
    if (*current == ' ') {
      // replace space to the substitute character
      *(chaine->first+cpt) = chaine->subs;
    }
    cpt++;
  } while(*current);

}

int main(){
  // dynamic allocation
  char *phrase = malloc(256);
  // copy of the string to allow modification
  strcpy(phrase, " onjo ur ");
  char substitute = '#';
  // Arg is a struct composed by: string and a character of substitution
  Str arg = { phrase, substitute };

  ReplaceSpaces(&arg);

  printf("%s\n", arg.first);
  free(phrase);
}
