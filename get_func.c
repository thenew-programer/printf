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
	int arr[10];

	while(1)
	{
		if (number == 0)
			break;

		fraction = number % 10;
		number /= 10;
		arr[i++] = fraction;
	}

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

