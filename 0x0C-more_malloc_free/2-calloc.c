#include "main.h"
#include "stdlib.h"

/**
 * _calloc - allocates memory for an array of for an array of
 * elements
 * @nmemb: the length of the array
 * @size: size of the each element of the array
 * Return: returns pointer to allocated space, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;

	return (arr);
}
