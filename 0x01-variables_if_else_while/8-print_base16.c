#include <stdio.h>

/**
 * main - base number16
 *
 * Return: 0
 */
int main(void)
{
	int num;
	char alp;


	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);
	putchar('\n');

	return (0);
}
