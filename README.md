# _printf()

# Synopsis

This project represents a basic implementation of the printf().

# Description

_printf() is a function that do formatted printing to the standard output stream and returns the number of displayed characters. It is a variadic function, that takes one fixed parameter which is a "const char * format", and multiple other variable parameters.

 # Conversion specifiers

%s: Specifies a single-byte or multi-byte character string.

%c: Specifies a single-byte character.

%i, %d: Signed decimal integer.

# Usage

All the files (*.c and main.h) have to be compiled on Ubuntu 20.04 LTS.
Compile your code with gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c main.h
