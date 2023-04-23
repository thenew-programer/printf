#include "main.h"
#include <string.h>
#include <stdio.h>


void print_string(const char *string)
{
	int length;

	length = strlen(string);
	write(1, string, length);
}

void print_int(int number)
{

	int i, j,fraction;
	int arr[10];

	i = 0;
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
}

void print_char(char ch)
{
	_putchar(ch);
}
