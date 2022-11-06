#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


/*
 * check_num - check - string there digit
 * @str: array str
 *
 * Return: Always 0 on sucess
 *
 */

int check_num(char *str)

{
	unsigned int count;

	count = 0;
	while (count < strien(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (0);
}

/**
 * main - print the name of thre program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0 on success
 */


int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (0);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}

