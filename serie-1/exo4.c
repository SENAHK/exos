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
  int length = strlen(chaine->first);

  // sizeof(char) optional since a char is always 1 byte
  char *new_chaine = malloc(sizeof(char) * length);
  strcpy(new_chaine, chaine->first);

  char *current = chaine->first+length-1;

  for (int i = 0; i < length; i++) {
    current = chaine->first + (length-1) - i;
    if (*current == ' ')
      *(new_chaine + i) = chaine->subs;
    else
      *(new_chaine + i) = *current;
  }

  return new_chaine;
}

int main(){
  char phrase[] = "1 345";

  Str arg = { phrase, '|' };
  Str *p_arg = &arg;

  char *transformed = Transform(p_arg);
  printf("%s\n", transformed);
}
