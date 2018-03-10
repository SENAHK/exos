#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Str_t{
  char *first;
  char subs;
};

typedef struct Str_t Str;

// Replaces spaces in a string and invert characters
char* Transform(Str *chaine){
  // Length of the string
  int length = strlen(chaine->first);

  // Init of a string the same size of the argument
  // -> sizeof(char) optional since a char is always 1 byte
  char *new_chaine = malloc(sizeof(char) * length + 1);

  // Pointer to iterate through the string argument
  char *current;

  // Iteration to reverse characters and replace spaces
  for (int i = 0; i < length; i++) {
    // Points from last to first char
    current = chaine->first + (length-1) - i;
    if (*current == ' ')
      // Pointer from first to last char
      // Replace the space
      *(new_chaine + i) = chaine->subs;
    else
      *(new_chaine + i) = *current;
  }

  return new_chaine;
}

int main(){
  char phrase[] = "1 34";

  Str arg = { phrase, '@' };
  Str *p_arg = &arg;

  char *transformed = Transform(p_arg);
  printf("%s\n", transformed);
}
