#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The charcter to print
 * Return: On success 1 esle -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
