#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @index: is the index, starting from 0 of the bit you want to set.
 * @n: the number to get bit from.
 *
 * Returns: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= *n | (1 << index);
	return (1);
}


