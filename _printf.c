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
	int i, d, length;
	char *s, ch;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] == '%' && format[i + 1] != 0)
		{
			switch (format[i++])
			{
				case ('c'):
					ch = (char) va_arg(args, int);
					length = print_char(ch);
					break;
				case ('s'):
					s = va_arg(args, char *);
					if (!s)
					{
						length = print_string("(nil)");
						break;
					}
					length = print_string(s);
					break;
				case ('i'):
				case ('d'):
					d = va_arg(args, int);
					length = print_int(d);
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
	return (i + length);
}
