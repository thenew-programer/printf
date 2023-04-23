#include "main.h"


int print_string(const char *string)
{
	int length;

	length = strlen(string);
	write(1, string, length);
	return (length);
}

int print_int(int number)
{

	int i, j,fraction;
	int sign;
	int arr[10];

	i = 0;
	sign = +1;
	if (number < 0)
	{

		number *= -1;
		sign = -1;
	}

	while(1)
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
	return (i);
}

int print_char(char ch)
{
	_putchar(ch);
	return (1);
}


int print_octal(int number)
{
	int i, j, fraction;
	int sign;
	int arr[10];

	i = 0;
	sign = +1;
	if (number < 0)
	{
		number *= -1;
		sign = -1;
	}

	while(1)
	return (i);
}
