#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers pointing to the strings of arguments input
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int nb, i;
	int (*func)(int, char**) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nb = atoi(argv[1]);
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nb; i++)
	{
		printf("%02x", *((unsigned char *)func + i));
		if (i != (nb - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
