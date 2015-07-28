
/*
 * Author: Rodrigo "SametSisartenep" González López <rodrigosloop@gmail.com>
 * About: Simple library to print basic colors.
 * File: colors.c
 * License: BSD Clause 3
 *
 */

#include "colors.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RED_COLOR "\x1b[0;31m"
#define GREEN_COLOR "\x1b[0;32m"
#define YELLOW_COLOR "\x1b[0;33m"
#define BLUE_COLOR "\x1b[0;34m"
#define MAGENTA_COLOR "\x1b[0;35m"
#define CYAN_COLOR "\x1b[0;36m"
#define RESET "\x1b[0m"

static char * paint_it ( const char *string, const char *color_code ) {
  size_t a_size = strlen(color_code) + strlen(string) + strlen(RESET) + 1;
  char *words = malloc(a_size);

  strncat(words, color_code, strlen(color_code) + 1);
  strncat(words, string, strlen(string) + 1);
  strncat(words, RESET, strlen(RESET) + 1);

  return words;
}

char * red ( const char *string ) {
  return paint_it(string, RED_COLOR);
}

char * green ( const char *string ) {
  return paint_it(string, GREEN_COLOR);
}

char * yellow ( const char *string ) {
  return paint_it(string, YELLOW_COLOR);
}

char * blue ( const char *string ) {
  return paint_it(string, BLUE_COLOR);
}

char * magenta ( const char *string ) {
  return paint_it(string, MAGENTA_COLOR);
}

char * cyan ( const char *string ) {
  return paint_it(string, CYAN_COLOR);
}
