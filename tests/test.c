
/*
 * This Test file is deprecated. As of version 2.x
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../colors.h"

int main ( int argc, char **argv ) {
  printf("Starting Test \"Framework\"...\n\n");

  printf("\x1b[1;31mRED\x1b[0m color test: ");
  printf(strcmp(red("Some text"), "\x1b[0;31mSome text\x1b[0m") == 0 ? "\x1b[0;32mOK\x1b[0m\n" : "\x1b[0;31mBAD :'(\x1b[0m\n");

  printf("\x1b[1;32mGREEN\x1b[0m color test: ");
  printf(strcmp(green("Some text"), "\x1b[0;32mSome text\x1b[0m") == 0 ? "\x1b[0;32mOK\x1b[0m\n" : "\x1b[0;31mBAD :'(\x1b[0m\n");

  printf("\x1b[1;33mYELLOW\x1b[0m color test: ");
  printf(strcmp(yellow("Some text"), "\x1b[0;33mSome text\x1b[0m") == 0 ? "\x1b[0;32mOK\x1b[0m\n" : "\x1b[0;31mBAD :'(\x1b[0m\n");

  printf("\x1b[1;34mBLUE\x1b[0m color test: ");
  printf(strcmp(blue("Some text"), "\x1b[0;34mSome text\x1b[0m") == 0 ? "\x1b[0;32mOK\x1b[0m\n" : "\x1b[0;31mBAD :'(\x1b[0m\n");

  printf("\x1b[1;35mMAGENTA\x1b[0m color test: ");
  printf(strcmp(magenta("Some text"), "\x1b[0;35mSome text\x1b[0m") == 0 ? "\x1b[0;32mOK\x1b[0m\n" : "\x1b[0;31mBAD :'(\x1b[0m\n");

  printf("\x1b[1;36mCYAN\x1b[0m color test: ");
  printf(strcmp(cyan("Some text"), "\x1b[0;36mSome text\x1b[0m") == 0 ? "\x1b[0;32mOK\x1b[0m\n" : "\x1b[0;31mBAD :'(\x1b[0m\n");

  printf("\n");

  return EXIT_SUCCESS;
}
