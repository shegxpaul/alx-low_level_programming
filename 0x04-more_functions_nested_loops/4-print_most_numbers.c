#include "main.h"

/**
 * print _most_numbers - print the numbers 0 -9
 * without 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int h = 0;

	while (h < 10)
	{
		if (h != 2 && h != 4)
			_putchar(h + '0');
		h++;
	}
	_putchar('\n');
}
