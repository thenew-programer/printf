/**
 * Name: printf
 * Authors: Youssef aka Jos & Hassan aka Zappa
 */


#include "main.h"


/**
* _printf - Our version of the actual printf
* @format: the format parameter
* Return: number of bytes printed
*/

int _printf(const char *format, ...)
{
	int i, d;
	char *s, ch;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] == '%' && format[i + 1] != 0)
		{
			switch (format[i+1])
			{
				case ('c'):
					ch = (char) va_arg(args, int);
					print_char(ch);
					break;
				case ('s'):
					s = va_arg(args, char *);
					if (!s)
					{
						print_string("(nil)");
						break;
					}
					print_string(s);
					break;
				case ('i'):
					d = va_arg(args, int);
					print_int(d);
					break;
				case ('d'):
					d = va_arg(args, int);
					print_int(d);
					break;
			}
			i++;
		}
		else 
		{
	  		_putchar(format[i]);
	  	}
	}
	va_end(args);
	return (i);
}
