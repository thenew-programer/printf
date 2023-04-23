#ifndef MAIN
#define MAIN

#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
* struct flags_t - struct for flags and functions
*/
typedef struct
{
	char spe;
	int (*print)(va_list);
} printHandler;

int _printf(const char *format, ...);

int _putchar(char c);

int print_string(va_list args);

int print_int(va_list args);

int print_char(va_list args);

int (*call_print(char ch))(va_list);


#endif
