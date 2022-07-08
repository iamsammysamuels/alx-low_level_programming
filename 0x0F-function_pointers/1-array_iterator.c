#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @size: the size of the array.
 * @action: a pointer to the function you need to use
 * @array: array element to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i <= size; i++)
		action(array[i]);
}
