#ifndef MAIN
#define MAIN

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>


int _printf(const char *format, ...);

void print_string(const char *string);

void print_int(int number);

void print_char(char ch);

int _putchar(char c);


#endif
