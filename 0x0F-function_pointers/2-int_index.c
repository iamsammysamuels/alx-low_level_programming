#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index -  returns the index of the first
 * element for which the cmp function does not return 0
 * @array: the array to be compared
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: If no element matches, return -1,
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		x = cmp(array[i]);
		if (x)
			return (i);
	}
	return (-1);
}
