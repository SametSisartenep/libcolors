# libcolors

A basic colors library for the C language.

# API

```c
void color ( const char *string ); // Print a <color> string
```

Currently supported colors:

- red
- green
- yellow
- blue
- magenta
- cyan

### Rainbow function

```c
void r_print ( const char *fmt, ... ); // Print a multicolor array
```

Where `fmt` is a string containing the color code based on:

- `%r` - Red
- `%g` - Green
- `%y` - Yellow
- `%b` - Blue
- `%m` - Magenta
- `%c` - Cyan

**Example:**

```c
  #include <stdio.h>
  #include "colors.h"

  int main ( int argc, char **argv ) {
    r_print("%r%g%b", "Red text", "Green text", "Blue text\n");

    return 0;
  }
```

# License
[![License](http://img.shields.io/badge/license-BSD3-brightgreen.svg)](http://opensource.org/licenses/BSD-3-Clause)
