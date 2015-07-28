
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

static char * paint_it ( const char *string, const char *color_code );

// The actual interface.

char * red ( const char *string );
char * green( const char *string );
char * yellow ( const char *string );
char * blue ( const char *string );
char * magenta ( const char *string );
char * cyan ( const char *string );


#ifdef __cplusplus
}
#endif

#endif
