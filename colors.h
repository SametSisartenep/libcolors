
/*
 * Author: Rodrigo "SametSisartenep" González López <rodrigosloop@gmail.com>
 * About: Simple library to print basic colors.
 * File: colors.h
 * License: BSD Clause 3
 *
 */

#ifndef COLORS_H
#define COLORS_H

#ifdef __cplusplus
extern "C" {
#endif


// Reserved for internal use.

static void paint_it ( const char *string, const char *color_code );

// The actual interface.

void red ( const char *string );
void green ( const char *string );
void  yellow ( const char *string );
void  blue (  const char *string );
void magenta (  const char *string );
void cyan (  const char *string );


#ifdef __cplusplus
}
#endif

#endif
