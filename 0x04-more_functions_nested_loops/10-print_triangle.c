#include "main.h"
/**
 * print_traingle - prints a traingle
 * @n: size of the triang;le
 */

void print_triangle(int n)
{
	int h, tri;

	if (n > 0)
	{
		for (h = 1; h <= n h++)
		{
			for (tri = n; h; tri > 0; tri--)
				_putchar(' ');
			for (tri = 0; tri < h; tri++)
				_putchar('0');
			if (h == n)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
