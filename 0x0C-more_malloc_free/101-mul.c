#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Check the code.
 * @argc: number of arguments.
 * @argv: arguments.
 *
 * Return: zero
 */

int main (int ac, char *av[])
{
	int num_1, num_2, result;

	if (ac != 3)
	{
		printf("Error\n");
		exit (98);
	}
	else
	{
		num_1 = atoi(av[1]);
		num_2 = atoi(av[2]);
		result = num_1 * num_2;
		printf("%d", result);
	}
	return (0);
}
