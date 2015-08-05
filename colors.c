
/*
 * Author: Rodrigo "SametSisartenep" González López <rodrigosloop@gmail.com>
 * About: Simple library to print basic colors.
 * File: colors.c
 * License: BSD Clause 3
 *
 */

#include "colors.h"
#include <stdio.h>
#include <stdarg.h>

#define RED_COLOR "\x1b[0;31m"
#define GREEN_COLOR "\x1b[0;32m"
#define YELLOW_COLOR "\x1b[0;33m"
#define BLUE_COLOR "\x1b[0;34m"
#define MAGENTA_COLOR "\x1b[0;35m"
#define CYAN_COLOR "\x1b[0;36m"
#define RESET "\x1b[0m"


static void paint_it ( const char *string, const char *color_code ) {
    printf("%s%s%s", color_code, string, RESET);
}

void red ( const char *string ) {
  paint_it(string, RED_COLOR);
}

void green ( const char *string ) {
  paint_it(string, GREEN_COLOR);
}

void yellow ( const char *string ) {
  paint_it(string, YELLOW_COLOR);
}

void blue ( const char *string ) {
  paint_it(string, BLUE_COLOR);
}

void magenta ( const char *string ) {
  paint_it(string, MAGENTA_COLOR);
}

void cyan ( const char *string ) {
  paint_it(string, CYAN_COLOR);
}

void r_print ( const char *fmt, ... ) {
  va_list ap;

  va_start(ap, fmt);

  while (*fmt != '\0') {
    if (*fmt == '%') {
      fmt++;
      if (*fmt == 'r') {
        red(va_arg(ap, char*));
      } else if (*fmt == 'g') {
        green(va_arg(ap, char*));
      } else if (*fmt == 'y') {
        yellow(va_arg(ap, char*));
      } else if (*fmt == 'b') {
        blue(va_arg(ap, char*));
      } else if (*fmt == 'm') {
        magenta(va_arg(ap, char*));
      } else if (*fmt == 'c') {
        cyan(va_arg(ap, char*));
      }
    }
    fmt++;
  }
  va_end(ap);
}
