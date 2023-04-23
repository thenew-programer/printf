#include "main.h"

/**
* _printf - Our version of the actual printf
* @format: the format parameter
* Return: number of bytes printed
*/

int _printf(const char *format, ...)
{
	int (*printFunc)(va_list);
	const char *ptr;
	va_list args;
	register int length;


	va_start(args, format);
	if ((!format || (format[0] == '%' && !format[1]))
	|| (format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);

	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if(*ptr == '%')
			{
				length += _putchar('%');
				continue;
			}
			printFunc = call_print(*ptr);
			length += printFunc(args);
		}
		else
			length += _putchar(*ptr);
	}
	va_end(args);
	return (length);

}
