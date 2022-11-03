#include "main.h"

/**
 * factorial - factorila of a given number
 * @n: pointer block of memory to fill
 * @Return: fcatorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
