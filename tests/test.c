
/*
 * This Test file is deprecated. As of version 2.x
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../colors.h"

int main ( int argc, char **argv ) {

  const char *text = "Some Text Here";

  red(text);
  printf("\n");
  green(text);
  printf("\n");
  yellow(text);
  printf("\n");
  blue(text);
  printf("\n");
  magenta(text);
  printf("\n");
  cyan(text);
  printf("\n");

  printf("\n");

  return EXIT_SUCCESS;
}
