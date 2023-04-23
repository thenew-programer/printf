#include "main.h"

/**
* _printf - Our version of the actual printf
* @format: the format parameter
* Return: number of bytes printed
*/

int _printf(const char *format, ...)
{
	int i, length, var;
	char *s, ch;
	va_list args;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] == '%' && format[i + 1] != 0)
		{
			switch (format[i + 1])
			{
				case ('c'):
					ch = (char) va_arg(args, int);
					var = print_char(ch);
					length += var;
					break;
				case ('s'):
					s = va_arg(args, char *);
					var = print_string(s);
					length += var;
					break;
				case ('i'):
				case ('d'):
					/*d = va_arg(args, int);*/
					var = print_int(va_arg(args, int));
					length += var;
					break;
			}
			i++;
		}
		else
			_putchar(format[i]);
	}
	va_end(args);
	return (i);
}
