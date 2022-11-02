#include <unistd.h>

/**
 * _putchar - writes everything into tdout
 * @c: char t o print
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

