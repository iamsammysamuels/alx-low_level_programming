#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: min number to start.
 * @max: mix number to start.
 *
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, diff;
	int *buffer;

	if (min > max)
		return (NULL);
	diff = max - min;
	buffer = malloc(sizeof(int) * (diff + 1));
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i <= diff; i++)
		buffer[i] = min++;
	return (buffer);
}
