#include <stdio.h>

/**
 * main - reverse order
 *
 * Return: 0
 */

int main(void)
{
	char lf;

	for (lf = 'z'; lf >= 'a'; lf--)
		putchar(lf);

	putchar('\n');

	return (0);
}
