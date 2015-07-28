#include "colors.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RED_COLOR "\x1b[0;31m"
#define GREEN_COLOR "\x1b[0;32m"
#define BLUE_COLOR "\x1b[0;34m"
#define RESET "\x1b[0m"

char * red ( const char *string ) {
  size_t a_size = strlen(RED_COLOR) + strlen(string) + strlen(RESET) + 1;
  char *words = malloc(a_size);

  strncat(words, RED_COLOR, strlen(RED_COLOR) + 1);
  strncat(words, string, strlen(string) + 1);
  strncat(words, RESET, strlen(RESET) + 1);

  return words;
}

char * green ( const char *string ) {
  size_t a_size = strlen(GREEN_COLOR) + strlen(string) + strlen(RESET) + 1;
  char *words = malloc(a_size);

  strncat(words, GREEN_COLOR, strlen(GREEN_COLOR) + 1);
  strncat(words, string, strlen(string) + 1);
  strncat(words, RESET, strlen(RESET) + 1);

  return words;
}

char * blue ( const char *string ) {
  size_t a_size = strlen(BLUE_COLOR) + strlen(string) + strlen(RESET) + 1;
  char *words = malloc(a_size);

  strncat(words, BLUE_COLOR, strlen(BLUE_COLOR) + 1);
  strncat(words, string, strlen(string) + 1);
  strncat(words, RESET, strlen(RESET) + 1);

  return words;
}
