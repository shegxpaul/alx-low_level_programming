#include <unistd.h>

/*
* _putchar - writes th echarcter c to stdout
* @c: The charcter to print
*
* Return: on success 1
* one error, -1 is returned, and errno is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
