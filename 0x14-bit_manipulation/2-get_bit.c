#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1. Otherwise - The value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitstat;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bitstat = ((n >> index) & 1);
	return (bitstat);
}
