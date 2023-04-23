#include "main.h"


/**
 * call_print - return the appropriate function for printing
 * @ch: char to test with
 * Return: function pointer.
 */
int (*call_print(char ch))(va_list)
{
	printHandler ph[] = {
		{'i', print_int},
		{'d', print_int},
		{'c', print_char},
		{'s', print_string}
	};
	int i, flags;

	flags = 4;
	for (i = 0; i < flags; i++)
	{
		if (ph[i].spe == ch)
			return (ph[i].print);
	}
	return (NULL);
}


/**
* print_string - print a string
* @args: va_list argument
* Return: number of chars printed
*/
int print_string(va_list args)
{
	int length;
	char *string;

	string = va_arg(args, char *);
	length = strlen(string);
	write(1, string, length);
	return (length);
}

/**
* print_int - print an integer
* @args: va_list argument
* Return: number of chars printed
*/

int print_int(va_list args)
{

	int i, j, fraction, sign, res, number;
	int arr[10];

	i = res = 0;
	sign = +1;
	number = va_arg(args, int);
	if (number < 0)
	{
		number *= -1;
		sign = -1;
		res++;
	}

	while (1)
	{
		if (number == 0)
			break;

		fraction = number % 10;
		number /= 10;
		arr[i++] = fraction;
	}
	if (sign == -1)
		_putchar('-');

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(arr[j] + '0');
	}
	res += i;
	return (res);
}
/**
* print_char - print a char
* @args: va_list argument
* Return: 1
*/

int print_char(va_list args)
{
	char ch;

	ch = (char) va_arg(args, int);
	_putchar(ch);
	return (1);
}

