#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1, or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int len = 0;
	unsigned int base = 1;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
		{
			return (0);
		}
		if (b[len - 1] == '1')
		{
			ui += base;
		}
		base *= 2;
		len--;
	}
	return (ui);
}
