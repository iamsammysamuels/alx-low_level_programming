#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: is a pointer to the memory previously allocated.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Return: void pointer to new memory location.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_str;
	char *new_loc;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size > new_size)
		old_size = new_size;
	new_str = ptr;
	new_loc = malloc(new_size);
	for (; i < old_size; i++)
		new_loc[i] = new_str[i];
	free(ptr);
	return (new_loc);
}
